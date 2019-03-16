const size_t ARR_MAX_SIZE = 4179;
const int raw_value[ARR_MAX_SIZE] PROGMEM = {347, 338, 289, 355, 336, 343, 355, 349, 335, 350, 338, 299, 353, 353, 368, 347, 338, 351, 346, 356, 335, 296, 367, 356, 344, 352, 333, 317, 368, 358, 274, 355, 348, 342, 378, 342, 345, 337, 305, 348, 296, 351, 349, 353, 351, 360, 327, 339, 351, 307, 287, 340, 317, 369, 359, 363, 316, 337, 322, 353, 339, 359, 334, 353, 335, 338, 349, 332, 253, 337, 352, 348, 355, 342, 336, 313, 329, 304, 347, 336, 276, 338, 344, 356, 333, 356, 328, 317, 338, 349, 335, 323, 359, 295, 317, 346, 253, 355, 341, 337, 319, 347, 366, 349, 348, 358, 339, 329, 335, 344, 306, 330, 332, 345, 373, 323, 337, 366, 323, 338, 353, 328, 359, 337, 288, 347, 337, 337, 353, 349, 328, 350, 334, 335, 314, 363, 345, 347, 344, 343, 345, 343, 340, 298, 349, 343, 344, 318, 315, 321, 362, 327, 336, 360, 340, 324, 344, 340, 338, 334, 346, 309, 297, 358, 340, 343, 348, 318, 311, 350, 338, 301, 353, 349, 351, 349, 301, 299, 317, 334, 338, 261, 352, 340, 349, 344, 328, 339, 355, 335, 314, 298, 351, 342, 332, 355, 345, 328, 339, 338, 325, 350, 341, 335, 331, 307, 367, 439, 352, 310, 331, 318, 337, 369, 343, 286, 258, 358, 435, 356, 315, 313, 345, 292, 305, 339, 320, 386, 234, 349, 329, 275, 515, 462, 335, 283, 167, 361, 436, 367, 323, 298, 280, 355, 349, 336, 283, 358, 342, 304, 434, 444, 323, 299, 347, 345, 329, 339, 300, 312, 345, 363, 294, 309, 494, 343, 366, 313, 354, 400, 328, 337, 275, 342, 369, 290, 315, 373, 413, 320, 363, 319, 281, 308, 367, 310, 302, 301, 277, 522, 340, 369, 292, 128, 266, 558, 337, 282, 338, 354, 336, 293, 351, 191, 549, 363, 309, 237, 233, 479, 331, 334, 249, 313, 524, 357, 250, 351, 508, 346, 329, 244, 283, 464, 370, 324, 293, 323, 291, 430, 312, 234, 266, 446, 346, 441, 296, 330, 437, 388, 342, 265, 345, 376, 348, 387, 237, 411, 450, 302, 146, 445, 463, 273, 291, 375, 325, 401, 412, 322, 314, 319, 305, 353, 288, 279, 405, 352, 379, 223, 395, 398, 321, 356, 350, 331, 360, 366, 324, 360, 370, 281, 397, 330, 399, 333, 507, 292, 169, 398, 379, 335, 294, 366, 326, 344, 427, 386, 347, 357, 325, 508, 352, 310, 246, 356, 379, 299, 346, 294, 451, 400, 264, 288, 498, 537, 295, 300, 373, 271, 439, 298, 345, 273, 418, 335, 510, 290, 402, 317, 365, 447, 241, 236, 402, 268, 387, 397, 292, 440, 203, 376, 367, 333, 363, 282, 306, 442, 482, 85, 304, 318, 239, 665, 359, 289, 221, 541, 310, 280, 499, 270, 277, 251, 489, 278, 293, 447, 229, 282, 304, 375, 337, 418, 285, 252, 603, 256, 436, 334, 309, 287, 225, 308, 265, 510, 295, 305, 409, 394, 307, 480, 227, 203, 668, 400, 242, 311, 268, 436, 344, 456, 327, 270, 412, 667, 146, 517, 197, 326, 112, 224, 329, 392, 381, 239, 417, 321, 301, 404, 179, 450, 233, 168, 361, 449, 196, 361, 413, 280, 322, 342, 215, 373, 318, 233, 413, 406, 597, 300, 23, 220, 434, 200, 465, 489, 314, 423, 227, 289, 486, 227, 526, 48, 52, 387, 230, 323, 597, 60, 246, 402, 531, 235, 326, 368, 452, 357, 307, 412, 308, 277, 396, 244, 443, 422, 224, 325, 291, 446, 377, 265, 469, 319, 516, 211, 285, 426, 252, 305, 336, 150, 460, 549, 146, 268, 346, 310, 349, 360, 444, 338, 387, 267, 243, 317, 367, 395, 224, 253, 374, 396, 158, 379, 341, 370, 345, 430, 272, 384, 243, 365, 364, 494, 353, 202, 329, 386, 368, 251, 330, 370, 379, 258, 342, 378, 374, 324, 304, 405, 281, 383, 386, 190, 112, 344, 337, 248, 424, 421, 423, 452, 294, 102, 491, 300, 206, 452, 204, 243, 397, 429, 213, 345, 363, 330, 386, 416, 186, 293, 320, 288, 415, 586, 238, 245, 296, 330, 429, 390, 142, 363, 318, 398, 319, 457, 236, 379, 302, 522, 91, 550, 356, 340, 521, 201, 330, 349, 360, 403, 304, 527, 360, 275, 304, 308, 199, 415, 294, 268, 26, 668, 254, 314, 299, 333, 234, 605, 342, 377, 381, 413, 291, 141, 496, 291, 331, 331, 325, 293, 376, 331, 322, 348, 342, 370, 332, 337, 334, 344, 319, 373, 326, 335, 352, 356, 317, 341, 330, 360, 260, 346, 370, 289, 382, 362, 368, 317, 363, 354, 373, 411, 373, 397, 400, 399, 371, 399, 368, 355, 367, 354, 328, 341, 345, 298, 281, 348, 323, 326, 336, 308, 310, 342, 315, 268, 342, 336, 309, 341, 346, 342, 349, 364, 316, 281, 344, 321, 326, 306, 307, 313, 340, 323, 266, 357, 363, 326, 299, 330, 351, 339, 281, 293, 436, 390, 346, 317, 308, 313, 294, 324, 334, 284, 350, 342, 327, 332, 320, 279, 452, 357, 320, 330, 348, 335, 329, 371, 312, 326, 319, 341, 342, 355, 448, 379, 358, 397, 352, 282, 313, 285, 319, 319, 320, 340, 337, 352, 333, 320, 432, 368, 387, 362, 339, 334, 316, 365, 317, 325, 378, 349, 343, 345, 303, 327, 342, 298, 319, 431, 373, 335, 324, 332, 315, 316, 335, 328, 339, 438, 336, 339, 339, 327, 328, 337, 339, 323, 358, 291, 144, 322, 337, 336, 326, 347, 313, 337, 444, 365, 338, 355, 334, 327, 344, 244, 328, 362, 411, 334, 368, 368, 347, 346, 361, 334, 354, 343, 371, 354, 295, 360, 168, 345, 209, 329, 401, 378, 377, 336, 351, 374, 311, 339, 349, 348, 193, 309, 328, 198, 346, 297, 347, 377, 323, 393, 370, 369, 342, 349, 359, 330, 360, 343, 408, 380, 346, 331, 331, 346, 334, 333, 331, 344, 362, 367, 375, 322, 343, 248, 328, 208, 352, 408, 374, 387, 353, 343, 348, 361, 352, 355, 384, 226, 296, 363, 277, 347, 293, 328, 348, 355, 469, 362, 371, 356, 328, 364, 362, 294, 352, 363, 345, 283, 357, 336, 340, 355, 341, 320, 356, 407, 374, 321, 367, 331, 250, 361, 183, 348, 366, 362, 346, 360, 339, 348, 354, 361, 337, 367, 307, 371, 357, 347, 308, 350, 355, 339, 345, 293, 345, 342, 357, 336, 331, 351, 331, 360, 298, 354, 350, 351, 357, 342, 348, 376, 338, 342, 444, 371, 356, 339, 345, 229, 350, 197, 330, 351, 387, 364, 339, 361, 341, 340, 351, 353, 334, 387, 335, 342, 360, 356, 248, 350, 308, 335, 359, 374, 354, 342, 360, 358, 167, 344, 356, 347, 262, 276, 355, 204, 360, 334, 353, 354, 343, 354, 388, 356, 341, 348, 351, 337, 350, 367, 293, 360, 358, 343, 340, 342, 345, 331, 350, 346, 285, 354, 342, 310, 331, 316, 350, 343, 359, 302, 345, 354, 341, 342, 355, 339, 335, 341, 336, 338, 356, 348, 347, 351, 345, 345, 343, 350, 326, 350, 357, 355, 329, 354, 356, 307, 354, 382, 369, 361, 359, 338, 349, 331, 333, 310, 348, 375, 367, 366, 337, 344, 341, 400, 257, 349, 363, 359, 379, 364, 347, 340, 361, 344, 331, 337, 251, 380, 349, 253, 347, 347, 358, 366, 363, 382, 377, 352, 362, 365, 348, 359, 262, 327, 398, 391, 309, 352, 373, 343, 322, 363, 335, 347, 320, 345, 344, 363, 357, 325, 367, 312, 342, 304, 341, 322, 334, 356, 347, 339, 355, 351, 332, 330, 352, 356, 338, 364, 346, 349, 350, 330, 404, 385, 360, 342, 347, 356, 327, 356, 350, 235, 355, 246, 369, 361, 368, 326, 321, 394, 349, 254, 391, 373, 354, 366, 311, 355, 235, 357, 261, 446, 369, 360, 350, 360, 346, 348, 361, 362, 198, 338, 381, 187, 366, 320, 342, 334, 345, 289, 339, 364, 349, 336, 350, 345, 336, 355, 319, 325, 339, 353, 336, 345, 356, 344, 339, 355, 273, 333, 361, 350, 344, 347, 356, 334, 358, 343, 366, 284, 368, 349, 340, 373, 352, 302, 353, 432, 346, 367, 346, 339, 75, 356, 254, 341, 366, 418, 366, 384, 377, 357, 368, 354, 326, 362, 467, 377, 380, 361, 345, 349, 331, 157, 325, 408, 392, 352, 344, 337, 334, 336, 351, 340, 343, 218, 235, 357, 277, 355, 356, 354, 381, 345, 360, 375, 341, 354, 353, 330, 338, 301, 333, 377, 369, 290, 343, 365, 352, 342, 346, 341, 333, 425, 358, 353, 338, 370, 230, 331, 202, 357, 410, 387, 362, 354, 352, 357, 334, 347, 339, 349, 339, 412, 344, 304, 351, 359, 335, 354, 348, 348, 370, 358, 332, 351, 379, 343, 316, 328, 360, 293, 286, 361, 352, 358, 370, 337, 341, 355, 401, 361, 380, 331, 349, 234, 351, 151, 354, 394, 390, 379, 358, 340, 359, 354, 356, 352, 372, 460, 370, 371, 361, 351, 351, 354, 324, 354, 378, 356, 351, 363, 349, 349, 364, 345, 351, 324, 361, 345, 360, 352, 343, 352, 351, 329, 341, 400, 358, 357, 353, 339, 298, 352, 256, 338, 430, 369, 294, 348, 354, 325, 342, 342, 325, 347, 472, 352, 364, 370, 341, 346, 352, 329, 338, 353, 370, 345, 346, 354, 330, 339, 352, 349, 300, 364, 354, 332, 374, 350, 337, 347, 352, 332, 349, 374, 344, 362, 342, 336, 349, 352, 352, 337, 365, 313, 340, 349, 352, 332, 341, 344, 336, 313, 360, 353, 327, 346, 346, 335, 330, 338, 286, 352, 357, 337, 345, 352, 334, 345, 350, 339, 336, 348, 325, 339, 368, 338, 328, 343, 346, 284, 329, 347, 341, 344, 356, 341, 338, 361, 309, 311, 342, 357, 329, 362, 344, 330, 345, 363, 285, 347, 340, 342, 339, 348, 351, 326, 352, 303, 346, 345, 361, 340, 342, 350, 338, 333, 357, 401, 359, 362, 351, 336, 358, 347, 316, 349, 431, 367, 336, 356, 335, 332, 343, 334, 335, 355, 287, 257, 327, 217, 338, 312, 348, 353, 341, 414, 360, 333, 361, 347, 323, 352, 195, 326, 408, 402, 292, 361, 388, 325, 344, 356, 333, 350, 402, 362, 355, 285, 355, 140, 356, 223, 309, 420, 391, 348, 370, 325, 348, 328, 347, 341, 337, 219, 266, 335, 191, 337, 272, 360, 368, 345, 464, 377, 326, 357, 364, 354, 355, 310, 359, 351, 416, 331, 355, 373, 373, 381, 366, 354, 371, 390, 401, 371, 355, 378, 313, 348, 461, 352, 203, 388, 415, 354, 350, 348, 340, 339, 358, 344, 278, 357, 377, 295, 352, 234, 322, 373, 362, 302, 371, 356, 365, 345, 355, 348, 325, 356, 369, 340, 283, 380, 314, 348, 362, 346, 354, 365, 408, 374, 361, 356, 341, 276, 352, 161, 340, 371, 351, 356, 339, 347, 323, 352, 340, 345, 359, 403, 364, 358, 347, 333, 347, 349, 334, 316, 382, 364, 338, 351, 348, 329, 351, 336, 334, 381, 256, 162, 341, 240, 330, 327, 351, 355, 330, 379, 277, 365, 366, 347, 333, 350, 201, 323, 419, 351, 357, 336, 359, 339, 332, 340, 355, 325, 344, 362, 346, 360, 350, 356, 345, 212, 328, 357, 389, 368, 359, 353, 346, 343, 356, 301, 315, 500, 298, 362, 234, 364, 303, 349, 362, 335, 439, 402, 374, 359, 324, 349, 338, 276, 349, 338, 388, 334, 348, 341, 358, 333, 332, 353, 328, 358, 410, 336, 362, 358, 178, 333, 179, 365, 348, 402, 364, 343, 345, 340, 336, 354, 327, 343, 211, 336, 327, 197, 349, 253, 339, 290, 356, 258, 388, 405, 358, 343, 351, 357, 326, 363, 302, 297, 413, 369, 219, 364, 364, 350, 362, 356, 360, 381, 366, 356, 354, 371, 377, 255, 350, 353, 418, 401, 374, 371, 344, 350, 350, 332, 350, 388, 396, 407, 336, 356, 308, 346, 389, 334, 253, 390, 387, 368, 346, 328, 345, 339, 327, 279, 249, 366, 351, 374, 330, 290, 350, 347, 329, 219, 382, 370, 370, 361, 337, 359, 326, 339, 350, 341, 305, 360, 332, 352, 349, 353, 354, 326, 422, 392, 354, 354, 379, 320, 337, 222, 324, 273, 397, 330, 346, 329, 348, 370, 351, 354, 327, 451, 373, 333, 326, 365, 356, 331, 381, 330, 254, 400, 381, 347, 344, 339, 324, 340, 346, 228, 494, 352, 318, 245, 358, 328, 317, 367, 345, 380, 399, 367, 344, 341, 356, 338, 323, 361, 264, 374, 267, 366, 319, 356, 359, 334, 352, 330, 408, 383, 359, 341, 336, 317, 336, 376, 368, 338, 424, 390, 355, 342, 348, 347, 323, 327, 290, 434, 385, 371, 370, 351, 327, 340, 368, 353, 266, 398, 367, 351, 326, 333, 342, 327, 341, 389, 230, 336, 360, 263, 325, 347, 350, 327, 340, 401, 381, 355, 363, 329, 333, 350, 369, 327, 326, 326, 226, 376, 325, 341, 364, 337, 342, 359, 430, 377, 347, 349, 338, 314, 356, 346, 330, 397, 383, 342, 342, 357, 328, 341, 352, 315, 427, 416, 362, 336, 355, 332, 249, 344, 350, 286, 399, 362, 332, 338, 340, 329, 335, 353, 337, 399, 299, 327, 327, 283, 321, 336, 339, 347, 335, 333, 358, 332, 339, 350, 339, 335, 180, 335, 363, 382, 315, 335, 351, 345, 320, 328, 347, 332, 360, 365, 347, 279, 342, 235, 333, 226, 343, 429, 378, 378, 336, 343, 345, 330, 325, 359, 416, 354, 360, 337, 333, 339, 343, 330, 330, 338, 306, 323, 341, 333, 357, 320, 335, 331, 347, 287, 316, 339, 343, 327, 333, 339, 332, 341, 344, 315, 310, 345, 351, 334, 354, 346, 349, 328, 299, 304, 335, 349, 345, 329, 358, 342, 350, 278, 327, 328, 347, 341, 323, 343, 349, 333, 340, 316, 331, 333, 353, 342, 343, 354, 349, 335, 317, 332, 331, 343, 347, 339, 344, 354, 333, 333, 346, 334, 339, 351, 343, 342, 339, 355, 325, 297, 353, 334, 344, 360, 333, 344, 362, 341, 325, 380, 365, 350, 340, 354, 341, 357, 368, 311, 425, 394, 363, 349, 395, 157, 349, 218, 357, 329, 407, 391, 351, 370, 361, 331, 344, 346, 336, 382, 359, 341, 336, 349, 336, 325, 345, 329, 371, 348, 336, 324, 342, 360, 361, 339, 370, 346, 354, 466, 364, 323, 359, 359, 335, 349, 341, 267, 391, 374, 347, 348, 313, 344, 330, 359, 144, 393, 390, 360, 332, 351, 345, 332, 330, 345, 360, 374, 385, 231, 349, 159, 343, 289, 355, 456, 369, 394, 356, 321, 342, 345, 330, 333, 293, 204, 326, 366, 107, 344, 312, 351, 343, 321, 298, 365, 350, 371, 340, 338, 349, 284, 341, 239, 372, 298, 375, 353, 346, 343, 343, 322, 336, 455, 374, 359, 305, 341, 260, 351, 271, 331, 256, 422, 338, 358, 357, 328, 337, 313, 350, 388, 439, 354, 346, 264, 356, 235, 346, 324, 333, 313, 366, 344, 348, 363, 340, 338, 340, 327, 292, 335, 136, 353, 300, 352, 355, 344, 360, 333, 396, 364, 328, 344, 355, 323, 335, 352, 329, 312, 356, 346, 330, 347, 363, 322, 324, 348, 328, 331, 356, 337, 339, 355, 344, 334, 350, 336, 310, 343, 342, 336, 329, 355, 339, 327, 352, 307, 329, 339, 342, 332, 346, 343, 330, 338, 348, 295, 281, 356, 340, 341, 355, 336, 334, 352, 317, 336, 351, 350, 336, 348, 362, 327, 353, 351, 335, 326, 359, 343, 333, 354, 346, 333, 356, 327, 325, 308, 373, 347, 346, 347, 345, 316, 333, 348, 331, 357, 355, 332, 348, 351, 330, 344, 318, 339, 343, 337, 345, 352, 363, 352, 342, 319, 349, 342, 346, 327, 360, 340, 345, 367, 343, 356, 341, 364, 357, 341, 343, 324, 348, 330, 350, 340, 249, 340, 397, 349, 339, 315, 380, 363, 392, 368, 330, 371, 335, 331, 334, 333, 320, 409, 364, 340, 331, 353, 316, 300, 319, 332, 416, 356, 372, 327, 343, 333, 307, 338, 333, 332, 388, 353, 335, 325, 335, 318, 338, 343, 322, 381, 364, 359, 311, 350, 345, 323, 322, 336, 339, 388, 371, 343, 338, 298, 276, 324, 397, 346, 376, 361, 386, 327, 306, 310, 265, 306, 379, 407, 376, 415, 391, 163, 280, 286, 401, 300, 316, 323, 325, 356, 343, 325, 354, 312, 361, 359, 404, 300, 328, 380, 356, 306, 308, 336, 319, 342, 387, 370, 371, 383, 348, 371, 331, 279, 384, 361, 339, 311, 340, 408, 334, 342, 326, 329, 345, 342, 327, 358, 339, 282, 290, 391, 316, 299, 317, 343, 332, 377, 337, 302, 338, 355, 360, 318, 355, 314, 323, 395, 353, 352, 288, 346, 335, 384, 357, 298, 374, 352, 318, 330, 337, 316, 320, 360, 325, 369, 357, 326, 330, 327, 312, 391, 337, 331, 303, 328, 379, 339, 340, 349, 325, 309, 361, 325, 331, 332, 374, 336, 352, 335, 348, 318, 373, 323, 343, 369, 330, 326, 386, 410, 260, 368, 370, 344, 339, 341, 303, 354, 355, 308, 382, 339, 330, 344, 376, 344, 358, 380, 326, 363, 329, 377, 345, 341, 342, 373, 332, 362, 293, 347, 365, 312, 369, 344, 347, 328, 341, 365, 346, 340, 352, 339, 330, 363, 362, 315, 347, 320, 378, 331, 352, 314, 337, 367, 352, 348, 295, 329, 347, 347, 343, 368, 379, 317, 328, 351, 322, 302, 311, 358, 318, 333, 357, 318, 344, 348, 333, 372, 355, 287, 328, 333, 334, 322, 321, 363, 337, 339, 353, 338, 330, 366, 335, 341, 358, 344, 324, 354, 334, 308, 331, 344, 342, 365, 270, 335, 320, 352, 356, 337, 333, 333, 328, 360, 365, 325, 344, 343, 322, 323, 337, 367, 343, 364, 349, 313, 349, 337, 316, 339, 351, 372, 365, 338, 323, 333, 354, 433, 207, 219, 303, 340, 347, 348, 338, 353, 353, 322, 328, 246, 313, 271, 317, 331, 215, 379, 272, 335, 315, 342, 380, 411, 312, 332, 330, 361, 333, 319, 355, 382, 335, 342, 346, 331, 379, 319, 290, 313, 360, 359, 356, 353, 305, 317, 207, 317, 227, 345, 416, 334, 348, 338, 318, 329, 324, 328, 330, 393, 204, 259, 360, 193, 322, 253, 354, 325, 351, 431, 334, 322, 345, 325, 344, 334, 310, 351, 431, 316, 256, 356, 298, 330, 354, 387, 277, 344, 403, 354, 329, 349, 320, 276, 352, 213, 352, 447, 352, 332, 361, 319, 336, 334, 365, 326, 379, 297, 334, 339, 235, 326, 214, 365, 323, 320, 448, 334, 318, 343, 337, 339, 331, 358, 331, 414, 289, 242, 337, 321, 346, 343, 361, 328, 339, 399, 361, 341, 352, 355, 299, 334, 262, 349, 388, 371, 338, 333, 356, 368, 352, 316, 303, 366, 300, 370, 351, 239, 351, 226, 335, 303, 356, 464, 365, 356, 347, 336, 345, 318, 348, 353, 395, 244, 228, 360, 238, 356, 257, 329, 309, 349, 356, 351, 323, 278, 327, 351, 304, 332, 354, 381, 334, 362, 343, 288, 351, 316, 326, 332, 359, 369, 308, 348, 307, 323, 362, 341, 310, 341, 445, 348, 324, 350, 303, 320, 329, 293, 331, 398, 378, 344, 352, 351, 311, 325, 324, 302, 336, 402, 342, 332, 310, 329, 278, 340, 330, 343, 363, 334, 303, 355, 367, 343, 315, 343, 312, 349, 378, 350, 328, 367, 329, 246, 370, 218, 322, 374, 356, 343, 358, 335, 345, 335, 361, 347, 364, 271, 332, 346, 252, 347, 331, 354, 345, 324, 406, 363, 335, 359, 359, 311, 341, 275, 344, 382, 372, 369, 345, 338, 330, 342, 338, 341, 334, 373, 377, 338, 307, 351, 301, 336, 347, 339, 381, 370, 353, 346, 317, 350, 314, 343, 368, 307, 290, 293, 349, 290, 364, 349, 339, 366, 342, 407, 381, 363, 358, 342, 353, 334, 297, 353, 409, 363, 331, 347, 354, 365, 350, 339, 327, 356, 369, 352, 341, 339, 326, 238, 328, 216, 364, 369, 347, 352, 354, 319, 350, 325, 345, 327, 376, 219, 275, 358, 176, 332, 288, 358, 335, 353, 492, 338, 327, 363, 327, 360, 349, 355, 327, 463, 333, 221, 366, 328, 335, 350, 338, 325, 361, 444, 325, 326, 376, 340, 329, 333, 223, 326, 438, 380, 338, 354, 347, 349, 313, 344, 327, 320, 404, 398, 336, 266, 323, 171, 343, 347, 313, 401, 341, 303, 343, 314, 349, 330, 295, 333, 385, 277, 123, 334, 289, 349, 335, 350, 335, 371, 439, 386, 338, 339, 349, 256, 352, 219, 346, 407, 388, 345, 352, 354, 358, 323, 360, 372, 366, 320, 322, 353, 252, 375, 290, 341, 339, 356, 358, 356, 363, 366, 324, 355, 346, 327, 346, 354, 415, 327, 351, 368, 336, 322, 336, 321, 350, 392, 319, 349, 338, 319, 315, 340, 258, 357, 396, 331, 333, 360, 293, 339, 324, 339, 324, 360, 373, 341, 331, 264, 320, 314, 346, 288, 356, 437, 352, 367, 367, 320, 350, 321, 345, 320, 379, 346, 300, 359, 314, 322, 312, 346, 330, 341, 470, 354, 339, 365, 315, 316, 334, 348, 319, 436, 366, 312, 335, 305, 326, 321, 362, 319, 320, 365, 353, 326, 308, 342, 258, 347, 308, 314, 387, 373, 315, 345, 339, 336, 363, 364, 305, 326, 349, 291, 329, 295, 346, 320, 347, 373, 355, 385, 366, 310, 351, 357, 360, 325, 295, 332, 363, 394, 329, 345, 339, 340, 280, 345, 316, 349, 442, 366, 346, 331, 348, 266, 343, 324, 315, 365, 363, 353, 342, 361, 344, 298, 346, 336, 362, 328, 317, 346, 275, 350, 317, 337, 364, 369, 392, 323, 296, 350, 306, 362, 343, 332, 350, 366, 350, 304, 358, 313, 341, 365, 336, 331, 362, 422, 364, 340, 359, 337, 304, 340, 272, 348, 412, 370, 358, 342, 326, 340, 310, 346, 310, 343, 368, 320, 359, 280, 339, 315, 342, 331, 317, 422, 329, 327, 374, 339, 304, 344, 365, 343, 354, 383, 365, 372, 370, 363, 368, 362, 359, 354, 364, 361, 357, 378, 348, 362, 370, 363, 353, 426, 393, 355, 347, 370, 358, 345, 364, 353, 334, 434, 360, 352, 358, 323, 322, 332, 275, 319, 402, 354, 350, 343, 343, 326, 352, 336, 318, 336, 396, 374, 342, 316, 342, 253, 340, 297, 334, 407, 370, 346, 338, 333, 336, 316, 370, 343, 397, 292, 230, 329, 243, 352, 306, 344, 350, 342, 425, 383, 340, 355, 357, 354, 326, 318, 354, 432, 325, 239, 348, 327, 349, 344, 339, 356, 377, 408, 377, 353, 350, 358, 339, 334, 266, 360, 426, 369, 311, 349, 332, 346, 342, 355, 360, 381, 369, 368, 358, 318, 347, 222, 320, 235, 337, 446, 366, 356, 366, 326, 393, 322, 336, 358, 494, 242, 269, 358, 161, 370, 279, 356, 325, 342, 416, 345, 347, 370, 302, 383, 354, 312, 333, 376, 356, 320, 351, 366, 365, 301, 345, 341, 388, 403, 374, 349, 367, 336, 359, 366, 320, 337, 465, 366, 331, 351, 347, 360, 361, 364, 327, 423, 341, 338, 348, 337, 364, 337, 334, 295, 315, 447, 340, 318, 331, 322, 388, 321, 334, 321, 421, 352, 266, 350, 334, 328, 332, 355, 337, 309, 370, 346, 313, 341, 373, 261, 317, 251, 333, 398, 369, 334, 351, 324, 335, 317, 365, 340, 375, 256, 330, 361, 237, 328, 220, 336, 318, 337, 476, 351, 332, 328, 345, 424, 314, 395, 317, 385, 275, 278, 345, 262, 345, 332, 358, 266, 337, 455, 433, 283, 356, 355, 344, 322, 307, 334, 445, 390, 311, 328, 322, 373, 312, 342, 349, 385, 348, 365, 336, 326, 327, 329, 383, 309, 331, 425, 336, 340, 350, 309, 380, 320, 407, 323, 411, 338, 349, 335, 303, 321, 327, 304, 291, 293, 458, 396, 317, 385, 332, 361, 301, 300, 311, 391, 339, 336, 358, 307, 313, 311, 357, 292, 368, 406, 391, 316, 331, 317, 288, 377, 299, 292, 440, 368, 301, 341, 322, 396, 363, 373, 311, 373, 302, 337, 332, 318, 300, 302, 351, 295, 320, 456, 372, 313, 397, 319, 353, 319, 349, 317, 450, 340, 294, 325, 299, 327, 312, 365, 309, 336, 411, 407, 317, 352, 312, 310, 321, 352, 299, 417, 354, 297, 315, 333, 345, 304, 411, 321, 372, 336, 348, 331, 274, 328, 290, 320, 304, 323, 436, 361, 333, 355, 333, 368, 313, 367, 309, 397, 318, 265, 321, 265, 329, 305, 320, 301, 346, 298, 258, 317, 266, 321, 332, 307, 318, 337, 418, 330, 319, 360, 323, 339, 320, 276, 319, 357, 362, 284, 358, 333, 334, 313, 344, 291, 343, 362, 345, 336, 317, 319, 250, 334, 241, 333, 381, 271, 304, 357, 293, 351, 329, 368, 324, 336, 287, 290, 337, 234, 324, 288, 369, 342, 349, 358, 326, 225, 348, 309, 346, 357, 355, 320, 350, 366, 268, 351, 355, 334, 340, 371, 323, 362, 402, 347, 306, 366, 333, 286, 349, 237, 333, 428, 405, 349, 359, 355, 335, 288, 368, 316, 354, 359, 363, 317, 274, 344, 248, 358, 331, 359, 440, 417, 352, 351, 374, 359, 342, 364, 356, 361, 278, 256, 337, 314, 363, 349, 352, 356, 373, 366, 373, 337, 349, 359, 337, 349, 240, 359, 404, 379, 326, 365, 362, 367, 355, 347, 302, 345, 389, 361, 323, 269, 331};