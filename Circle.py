from manim import *

class Test (Scene):
    def construct (Self):

        circ = Circle (radius=3.0, color = PURE_BLUE, stroke_color = GREEN, fill_color = RED, fill_opacity = 0.75)

        Self.play(Create(circ), run_time = 3)
        for i in range (0,9):
            Self.wait()
    