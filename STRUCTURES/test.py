from pydub import AudioSegment
import os

def break_audio_into_packets(input_file, output_directory, packet_duration_ms):
    # Load the audio file
    audio = AudioSegment.from_file(input_file)

    # Calculate the duration of the audio file in milliseconds
    total_duration_ms = len(audio)

    # Calculate the number of packets based on the specified duration
    num_packets = total_duration_ms // packet_duration_ms

    # Create the output directory if it doesn't exist
    if not os.path.exists(output_directory):
        os.makedirs(output_directory)

    # Break the audio into packets
    for i in range(num_packets):
        start_time = i * packet_duration_ms
        end_time = (i + 1) * packet_duration_ms

        # Extract the packet from the audio
        packet = audio[start_time:end_time]

        # Define the output file name
        output_file = os.path.join(output_directory, f"packet_{i}.wav")

        # Export the packet as a WAV file
        packet.export(output_file, format="wav")

if __name__ == "_main_":
    input_file = "input_audio.mp3"  # Replace with your input audio file
    output_directory = "output_packets"  # Replace with your desired output directory
    packet_duration_ms = 10000  # Duration of each packet in milliseconds

    break_audio_into_packets(input_file, output_directory, packet_duration_ms)




import librosa
import numpy as np

def audio_to_mfcc(audio_file, n_mfcc=13, hop_length=512, n_fft=2048):
    """
    Convert an audio file to Mel-frequency cepstral coefficients (MFCCs).

    Args:
    audio_file (str): Path to the input audio file.
    n_mfcc (int): Number of MFCC coefficients to generate.
    hop_length (int): Number of audio samples between successive frames.
    n_fft (int): Number of samples used in each short-time Fourier transform (STFT) frame.

    Returns:
    mfccs (np.ndarray): A 2D numpy array containing the MFCCs of the audio file.
    """

    # Load the audio file
    y, sr = librosa.load(audio_file)

    # Compute MFCCs
    mfccs = librosa.feature.mfcc(y=y, sr=sr, n_mfcc=n_mfcc, hop_length=hop_length, n_fft=n_fft)

    return mfccs

# Example usage
audio_file = "your_audio_file.wav"
mfccs = audio_to_mfcc(audio_file)
print(mfccs.shape)  # This will print the shape of the MFCCs matrix