from manim import *

class Pith (Scene):
    def construct (Self):
        sq = Square (side_length = 5, stroke_color = GREEN, fill_color = DARK_BLUE, fill_opacity = 0.75)
        Self.play(Create(sq), run_time = 3)
        for i in range (0,7):
            Self.wait()