#include <raylib.h>
int main() {
  InitWindow(800, 600, "music player");
  SetTargetFPS(60);

  InitAudioDevice();
  /*Music music = LoadMusicStream("song.mp3");*/
  /*Music music = LoadMusicStream("song.flac");*/
  /*Music music = LoadMusicStream("song.wav");*/
  Music music = LoadMusicStream("output.mp3");
  SetMusicVolume(music, 0.5f);
  PlayMusicStream(music);

  while (!WindowShouldClose()) {
    UpdateMusicStream(music);
    BeginDrawing();
    ClearBackground(MAGENTA);
    EndDrawing();
  }

  UnloadMusicStream(music);
  CloseAudioDevice();
  CloseWindow();
}
