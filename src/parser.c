#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_game = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_title = 4,
  anon_sym_by = 5,
  anon_sym_author = 6,
  anon_sym_version = 7,
  anon_sym_created = 8,
  anon_sym_it = 9,
  anon_sym_is = 10,
  anon_sym_they = 11,
  anon_sym_are = 12,
  anon_sym_COMMA = 13,
  anon_sym_traits = 14,
  anon_sym_PIPE = 15,
  anon_sym_states = 16,
  anon_sym_enter = 17,
  anon_sym_location = 18,
  anon_sym_exit = 19,
  anon_sym_exits = 20,
  anon_sym_to = 21,
  anon_sym_north = 22,
  anon_sym_south = 23,
  anon_sym_east = 24,
  anon_sym_west = 25,
  anon_sym_up = 26,
  anon_sym_down = 27,
  anon_sym_object = 28,
  anon_sym_on = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  sym_words = 32,
  sym_newline = 33,
  sym_int = 34,
  sym_float = 35,
  sym_name = 36,
  sym_comment = 37,
  sym_game = 38,
  sym_statements = 39,
  sym_header_statement = 40,
  sym_title_def = 41,
  sym_author_def = 42,
  sym_version_def = 43,
  sym_date_def = 44,
  sym_is_statement = 45,
  sym_trait_statement = 46,
  sym_trait_list = 47,
  sym_trait_def = 48,
  sym_state_statement = 49,
  sym_state_list = 50,
  sym_state_def = 51,
  sym_enter_statement = 52,
  sym_location = 53,
  sym_location_statements = 54,
  sym_exit_statement = 55,
  sym_exit_def = 56,
  sym_exit = 57,
  sym_object = 58,
  sym_object_statements = 59,
  sym_on_statement = 60,
  sym_on_statements = 61,
  sym_text = 62,
  sym_code = 63,
  aux_sym_statements_repeat1 = 64,
  aux_sym_is_statement_repeat1 = 65,
  aux_sym_trait_list_repeat1 = 66,
  aux_sym_state_list_repeat1 = 67,
  aux_sym_state_def_repeat1 = 68,
  aux_sym_location_statements_repeat1 = 69,
  aux_sym_exit_statement_repeat1 = 70,
  aux_sym_object_statements_repeat1 = 71,
  aux_sym_on_statements_repeat1 = 72,
  aux_sym_text_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_game] = "game",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_title] = "title",
  [anon_sym_by] = "by",
  [anon_sym_author] = "author",
  [anon_sym_version] = "version",
  [anon_sym_created] = "created",
  [anon_sym_it] = "it",
  [anon_sym_is] = "is",
  [anon_sym_they] = "they",
  [anon_sym_are] = "are",
  [anon_sym_COMMA] = ",",
  [anon_sym_traits] = "traits",
  [anon_sym_PIPE] = "|",
  [anon_sym_states] = "states",
  [anon_sym_enter] = "enter",
  [anon_sym_location] = "location",
  [anon_sym_exit] = "exit",
  [anon_sym_exits] = "exits",
  [anon_sym_to] = "to",
  [anon_sym_north] = "north",
  [anon_sym_south] = "south",
  [anon_sym_east] = "east",
  [anon_sym_west] = "west",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [anon_sym_object] = "object",
  [anon_sym_on] = "on",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_words] = "words",
  [sym_newline] = "newline",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_name] = "name",
  [sym_comment] = "comment",
  [sym_game] = "game",
  [sym_statements] = "statements",
  [sym_header_statement] = "header_statement",
  [sym_title_def] = "title_def",
  [sym_author_def] = "author_def",
  [sym_version_def] = "version_def",
  [sym_date_def] = "date_def",
  [sym_is_statement] = "is_statement",
  [sym_trait_statement] = "trait_statement",
  [sym_trait_list] = "trait_list",
  [sym_trait_def] = "trait_def",
  [sym_state_statement] = "state_statement",
  [sym_state_list] = "state_list",
  [sym_state_def] = "state_def",
  [sym_enter_statement] = "enter_statement",
  [sym_location] = "location",
  [sym_location_statements] = "location_statements",
  [sym_exit_statement] = "exit_statement",
  [sym_exit_def] = "exit_def",
  [sym_exit] = "exit",
  [sym_object] = "object",
  [sym_object_statements] = "object_statements",
  [sym_on_statement] = "on_statement",
  [sym_on_statements] = "on_statements",
  [sym_text] = "text",
  [sym_code] = "code",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_is_statement_repeat1] = "is_statement_repeat1",
  [aux_sym_trait_list_repeat1] = "trait_list_repeat1",
  [aux_sym_state_list_repeat1] = "state_list_repeat1",
  [aux_sym_state_def_repeat1] = "state_def_repeat1",
  [aux_sym_location_statements_repeat1] = "location_statements_repeat1",
  [aux_sym_exit_statement_repeat1] = "exit_statement_repeat1",
  [aux_sym_object_statements_repeat1] = "object_statements_repeat1",
  [aux_sym_on_statements_repeat1] = "on_statements_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_game] = anon_sym_game,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_created] = anon_sym_created,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_they] = anon_sym_they,
  [anon_sym_are] = anon_sym_are,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_traits] = anon_sym_traits,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_states] = anon_sym_states,
  [anon_sym_enter] = anon_sym_enter,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_exits] = anon_sym_exits,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_north] = anon_sym_north,
  [anon_sym_south] = anon_sym_south,
  [anon_sym_east] = anon_sym_east,
  [anon_sym_west] = anon_sym_west,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_words] = sym_words,
  [sym_newline] = sym_newline,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_name] = sym_name,
  [sym_comment] = sym_comment,
  [sym_game] = sym_game,
  [sym_statements] = sym_statements,
  [sym_header_statement] = sym_header_statement,
  [sym_title_def] = sym_title_def,
  [sym_author_def] = sym_author_def,
  [sym_version_def] = sym_version_def,
  [sym_date_def] = sym_date_def,
  [sym_is_statement] = sym_is_statement,
  [sym_trait_statement] = sym_trait_statement,
  [sym_trait_list] = sym_trait_list,
  [sym_trait_def] = sym_trait_def,
  [sym_state_statement] = sym_state_statement,
  [sym_state_list] = sym_state_list,
  [sym_state_def] = sym_state_def,
  [sym_enter_statement] = sym_enter_statement,
  [sym_location] = sym_location,
  [sym_location_statements] = sym_location_statements,
  [sym_exit_statement] = sym_exit_statement,
  [sym_exit_def] = sym_exit_def,
  [sym_exit] = sym_exit,
  [sym_object] = sym_object,
  [sym_object_statements] = sym_object_statements,
  [sym_on_statement] = sym_on_statement,
  [sym_on_statements] = sym_on_statements,
  [sym_text] = sym_text,
  [sym_code] = sym_code,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_is_statement_repeat1] = aux_sym_is_statement_repeat1,
  [aux_sym_trait_list_repeat1] = aux_sym_trait_list_repeat1,
  [aux_sym_state_list_repeat1] = aux_sym_state_list_repeat1,
  [aux_sym_state_def_repeat1] = aux_sym_state_def_repeat1,
  [aux_sym_location_statements_repeat1] = aux_sym_location_statements_repeat1,
  [aux_sym_exit_statement_repeat1] = aux_sym_exit_statement_repeat1,
  [aux_sym_object_statements_repeat1] = aux_sym_object_statements_repeat1,
  [aux_sym_on_statements_repeat1] = aux_sym_on_statements_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_game] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_created] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_it] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_they] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_traits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_states] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_north] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_south] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_east] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_west] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_words] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_game] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_header_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_title_def] = {
    .visible = true,
    .named = true,
  },
  [sym_author_def] = {
    .visible = true,
    .named = true,
  },
  [sym_version_def] = {
    .visible = true,
    .named = true,
  },
  [sym_date_def] = {
    .visible = true,
    .named = true,
  },
  [sym_is_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_list] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_def] = {
    .visible = true,
    .named = true,
  },
  [sym_state_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_state_list] = {
    .visible = true,
    .named = true,
  },
  [sym_state_def] = {
    .visible = true,
    .named = true,
  },
  [sym_enter_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_location_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_def] = {
    .visible = true,
    .named = true,
  },
  [sym_exit] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_on_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_on_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_is_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_state_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_location_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exit_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_on_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 24,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 7,
  [44] = 6,
  [45] = 8,
  [46] = 12,
  [47] = 47,
  [48] = 7,
  [49] = 20,
  [50] = 50,
  [51] = 6,
  [52] = 11,
  [53] = 14,
  [54] = 54,
  [55] = 55,
  [56] = 8,
  [57] = 17,
  [58] = 58,
  [59] = 18,
  [60] = 16,
  [61] = 21,
  [62] = 19,
  [63] = 15,
  [64] = 64,
  [65] = 65,
  [66] = 11,
  [67] = 67,
  [68] = 30,
  [69] = 20,
  [70] = 12,
  [71] = 15,
  [72] = 16,
  [73] = 18,
  [74] = 27,
  [75] = 23,
  [76] = 19,
  [77] = 21,
  [78] = 25,
  [79] = 17,
  [80] = 14,
  [81] = 33,
  [82] = 41,
  [83] = 30,
  [84] = 84,
  [85] = 27,
  [86] = 25,
  [87] = 23,
  [88] = 40,
  [89] = 37,
  [90] = 6,
  [91] = 35,
  [92] = 8,
  [93] = 7,
  [94] = 33,
  [95] = 20,
  [96] = 96,
  [97] = 15,
  [98] = 35,
  [99] = 16,
  [100] = 40,
  [101] = 21,
  [102] = 19,
  [103] = 11,
  [104] = 18,
  [105] = 41,
  [106] = 17,
  [107] = 12,
  [108] = 37,
  [109] = 14,
  [110] = 27,
  [111] = 30,
  [112] = 25,
  [113] = 23,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 117,
  [119] = 37,
  [120] = 120,
  [121] = 40,
  [122] = 41,
  [123] = 117,
  [124] = 124,
  [125] = 124,
  [126] = 124,
  [127] = 33,
  [128] = 124,
  [129] = 117,
  [130] = 124,
  [131] = 117,
  [132] = 132,
  [133] = 40,
  [134] = 37,
  [135] = 135,
  [136] = 135,
  [137] = 135,
  [138] = 138,
  [139] = 138,
  [140] = 138,
  [141] = 138,
  [142] = 135,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 145,
  [148] = 145,
  [149] = 143,
  [150] = 143,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 145,
  [155] = 152,
  [156] = 143,
  [157] = 157,
  [158] = 152,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 160,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 160,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 160,
  [179] = 179,
  [180] = 171,
  [181] = 171,
  [182] = 172,
  [183] = 172,
  [184] = 173,
  [185] = 174,
  [186] = 175,
  [187] = 187,
  [188] = 173,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 171,
  [193] = 193,
  [194] = 172,
  [195] = 174,
  [196] = 173,
  [197] = 175,
  [198] = 175,
  [199] = 199,
  [200] = 179,
  [201] = 177,
  [202] = 202,
  [203] = 159,
  [204] = 164,
  [205] = 205,
  [206] = 179,
  [207] = 177,
  [208] = 208,
  [209] = 159,
  [210] = 164,
  [211] = 211,
  [212] = 179,
  [213] = 177,
  [214] = 214,
  [215] = 159,
  [216] = 164,
  [217] = 162,
  [218] = 162,
  [219] = 167,
  [220] = 167,
};

static inline bool anon_sym_COMMA_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < '{'
    ? (c < '.'
      ? (c < 0
        ? c == 0
        : (c <= '#' || (c >= '%' && c <= ',')))
      : (c <= '/' || (c < '['
        ? (c >= ':' && c <= '@')
        : (c <= '^' || c == '`'))))
    : (c <= '~' || (c < 8239
      ? (c < 5760
        ? c == 160
        : (c <= 5760 || (c >= 8192 && c <= 8203)))
      : (c <= 8239 || (c < 12288
        ? (c >= 8287 && c <= 8288)
        : (c <= 12288 || c == 65279))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(94);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '|') ADVANCE(117);
      if (lookahead == '}') ADVANCE(140);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (anon_sym_COMMA_character_set_1(lookahead)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(207);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'b') ADVANCE(203);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == 'v') ADVANCE(162);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '|') ADVANCE(117);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (anon_sym_COMMA_character_set_1(lookahead)) SKIP(4)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(205);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '|') ADVANCE(117);
      if (anon_sym_COMMA_character_set_1(lookahead)) SKIP(5)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(205);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '|') ADVANCE(117);
      if (anon_sym_COMMA_character_set_1(lookahead)) SKIP(6)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(205);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '|') ADVANCE(117);
      if (anon_sym_COMMA_character_set_1(lookahead)) SKIP(7)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(205);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(80);
      if (anon_sym_COMMA_character_set_1(lookahead)) SKIP(9)
      if (lookahead != 0 &&
          lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          lookahead != ']' &&
          lookahead != '^' &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(205);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(147);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(144);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(10);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(144);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'j') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'w') ADVANCE(44);
      END_STATE();
    case 83:
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == '{') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == '}') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_game);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_author);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_version);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_created);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_created);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_it);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_they);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_they);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_traits);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_traits);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_states);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_states);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_enter);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_enter);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_location);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_exit);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 's') ADVANCE(127);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_exit);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_exits);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_exits);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_north);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_south);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_east);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_west);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_words);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_words);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_words);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(3);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_words);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(10);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_words);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_words);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(147);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(144);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(172);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(197);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(198);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(200);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(138);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'b') ADVANCE(174);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(194);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(153);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(107);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(99);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(158);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(204);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(183);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(156);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(187);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(184);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(152);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(182);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(150);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(150);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(180);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(181);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(196);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(195);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'j') ADVANCE(163);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(159);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(105);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(123);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(199);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(157);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(176);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(177);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(185);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(189);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(121);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(103);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(166);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 's') ADVANCE(119);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 's') ADVANCE(116);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 's') ADVANCE(170);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(109);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(151);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(167);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(175);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(136);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(124);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(188);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(164);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(160);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(165);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 't') ADVANCE(171);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(192);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'x') ADVANCE(173);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(101);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(112);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\\') ADVANCE(80);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 11},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 9},
  [137] = {.lex_state = 9},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 9},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 9},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_game] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_created] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_they] = ACTIONS(1),
    [anon_sym_are] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_traits] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_states] = ACTIONS(1),
    [anon_sym_enter] = ACTIONS(1),
    [anon_sym_location] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_exits] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_north] = ACTIONS(1),
    [anon_sym_south] = ACTIONS(1),
    [anon_sym_east] = ACTIONS(1),
    [anon_sym_west] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_game] = STATE(211),
    [anon_sym_game] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACK,
    ACTIONS(9), 1,
      anon_sym_title,
    ACTIONS(15), 1,
      anon_sym_version,
    ACTIONS(18), 1,
      anon_sym_created,
    ACTIONS(21), 1,
      anon_sym_it,
    ACTIONS(24), 1,
      anon_sym_they,
    ACTIONS(27), 1,
      anon_sym_traits,
    ACTIONS(30), 1,
      anon_sym_states,
    ACTIONS(33), 1,
      anon_sym_enter,
    ACTIONS(36), 1,
      anon_sym_location,
    ACTIONS(39), 1,
      anon_sym_object,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(12), 2,
      anon_sym_by,
      anon_sym_author,
    STATE(31), 4,
      sym_title_def,
      sym_author_def,
      sym_version_def,
      sym_date_def,
    STATE(2), 9,
      sym_header_statement,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_enter_statement,
      sym_location,
      sym_object,
      sym_text,
      aux_sym_statements_repeat1,
  [64] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_title,
    ACTIONS(52), 1,
      anon_sym_version,
    ACTIONS(54), 1,
      anon_sym_created,
    ACTIONS(56), 1,
      anon_sym_it,
    ACTIONS(58), 1,
      anon_sym_they,
    ACTIONS(60), 1,
      anon_sym_traits,
    ACTIONS(62), 1,
      anon_sym_states,
    ACTIONS(64), 1,
      anon_sym_enter,
    ACTIONS(66), 1,
      anon_sym_location,
    ACTIONS(68), 1,
      anon_sym_object,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      sym_name,
    STATE(190), 1,
      sym_statements,
    ACTIONS(50), 2,
      anon_sym_by,
      anon_sym_author,
    STATE(31), 4,
      sym_title_def,
      sym_author_def,
      sym_version_def,
      sym_date_def,
    STATE(5), 9,
      sym_header_statement,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_enter_statement,
      sym_location,
      sym_object,
      sym_text,
      aux_sym_statements_repeat1,
  [128] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_title,
    ACTIONS(52), 1,
      anon_sym_version,
    ACTIONS(54), 1,
      anon_sym_created,
    ACTIONS(56), 1,
      anon_sym_it,
    ACTIONS(58), 1,
      anon_sym_they,
    ACTIONS(60), 1,
      anon_sym_traits,
    ACTIONS(62), 1,
      anon_sym_states,
    ACTIONS(64), 1,
      anon_sym_enter,
    ACTIONS(66), 1,
      anon_sym_location,
    ACTIONS(68), 1,
      anon_sym_object,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      sym_name,
    STATE(166), 1,
      sym_statements,
    ACTIONS(50), 2,
      anon_sym_by,
      anon_sym_author,
    STATE(31), 4,
      sym_title_def,
      sym_author_def,
      sym_version_def,
      sym_date_def,
    STATE(5), 9,
      sym_header_statement,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_enter_statement,
      sym_location,
      sym_object,
      sym_text,
      aux_sym_statements_repeat1,
  [192] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_title,
    ACTIONS(52), 1,
      anon_sym_version,
    ACTIONS(54), 1,
      anon_sym_created,
    ACTIONS(56), 1,
      anon_sym_it,
    ACTIONS(58), 1,
      anon_sym_they,
    ACTIONS(60), 1,
      anon_sym_traits,
    ACTIONS(62), 1,
      anon_sym_states,
    ACTIONS(64), 1,
      anon_sym_enter,
    ACTIONS(66), 1,
      anon_sym_location,
    ACTIONS(68), 1,
      anon_sym_object,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      sym_name,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    ACTIONS(50), 2,
      anon_sym_by,
      anon_sym_author,
    STATE(31), 4,
      sym_title_def,
      sym_author_def,
      sym_version_def,
      sym_date_def,
    STATE(2), 9,
      sym_header_statement,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_enter_statement,
      sym_location,
      sym_object,
      sym_text,
      aux_sym_statements_repeat1,
  [256] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(76), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(78), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [286] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    STATE(8), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(83), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(85), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_PIPE,
    STATE(6), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(89), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(91), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [346] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      anon_sym_it,
    ACTIONS(98), 1,
      anon_sym_they,
    ACTIONS(101), 1,
      anon_sym_traits,
    ACTIONS(104), 1,
      anon_sym_states,
    ACTIONS(107), 1,
      anon_sym_exit,
    ACTIONS(110), 1,
      anon_sym_exits,
    ACTIONS(113), 1,
      anon_sym_object,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_name,
    STATE(9), 7,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_exit_statement,
      sym_object,
      sym_text,
      aux_sym_location_statements_repeat1,
  [389] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_it,
    ACTIONS(124), 1,
      anon_sym_they,
    ACTIONS(126), 1,
      anon_sym_traits,
    ACTIONS(128), 1,
      anon_sym_states,
    ACTIONS(130), 1,
      anon_sym_exit,
    ACTIONS(132), 1,
      anon_sym_exits,
    ACTIONS(134), 1,
      anon_sym_object,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_name,
    STATE(189), 1,
      sym_location_statements,
    STATE(13), 7,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_exit_statement,
      sym_object,
      sym_text,
      aux_sym_location_statements_repeat1,
  [432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(140), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(142), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(146), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(148), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [490] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_it,
    ACTIONS(124), 1,
      anon_sym_they,
    ACTIONS(126), 1,
      anon_sym_traits,
    ACTIONS(128), 1,
      anon_sym_states,
    ACTIONS(130), 1,
      anon_sym_exit,
    ACTIONS(132), 1,
      anon_sym_exits,
    ACTIONS(134), 1,
      anon_sym_object,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_name,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(9), 7,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_exit_statement,
      sym_object,
      sym_text,
      aux_sym_location_statements_repeat1,
  [533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(156), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [562] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(161), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(163), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(165), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(167), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(171), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(173), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [649] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(178), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(180), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [678] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(185), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(187), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [707] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(189), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(191), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(78), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [761] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    ACTIONS(195), 1,
      anon_sym_it,
    ACTIONS(198), 1,
      anon_sym_they,
    ACTIONS(201), 1,
      anon_sym_traits,
    ACTIONS(204), 1,
      anon_sym_states,
    ACTIONS(207), 1,
      anon_sym_object,
    ACTIONS(210), 1,
      anon_sym_on,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      sym_name,
    STATE(22), 7,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_object,
      sym_on_statement,
      sym_text,
      aux_sym_object_statements_repeat1,
  [801] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(221), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [825] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_it,
    ACTIONS(225), 1,
      anon_sym_they,
    ACTIONS(227), 1,
      anon_sym_traits,
    ACTIONS(229), 1,
      anon_sym_states,
    ACTIONS(231), 1,
      anon_sym_object,
    ACTIONS(233), 1,
      anon_sym_on,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      sym_name,
    STATE(195), 1,
      sym_object_statements,
    STATE(28), 7,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_object,
      sym_on_statement,
      sym_text,
      aux_sym_object_statements_repeat1,
  [865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(173), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [889] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_it,
    ACTIONS(225), 1,
      anon_sym_they,
    ACTIONS(227), 1,
      anon_sym_traits,
    ACTIONS(229), 1,
      anon_sym_states,
    ACTIONS(231), 1,
      anon_sym_object,
    ACTIONS(233), 1,
      anon_sym_on,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      sym_name,
    STATE(185), 1,
      sym_object_statements,
    STATE(28), 7,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_object,
      sym_on_statement,
      sym_text,
      aux_sym_object_statements_repeat1,
  [929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(156), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [953] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_it,
    ACTIONS(225), 1,
      anon_sym_they,
    ACTIONS(227), 1,
      anon_sym_traits,
    ACTIONS(229), 1,
      anon_sym_states,
    ACTIONS(231), 1,
      anon_sym_object,
    ACTIONS(233), 1,
      anon_sym_on,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      sym_name,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(22), 7,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_object,
      sym_on_statement,
      sym_text,
      aux_sym_object_statements_repeat1,
  [993] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_it,
    ACTIONS(225), 1,
      anon_sym_they,
    ACTIONS(227), 1,
      anon_sym_traits,
    ACTIONS(229), 1,
      anon_sym_states,
    ACTIONS(231), 1,
      anon_sym_object,
    ACTIONS(233), 1,
      anon_sym_on,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      sym_name,
    STATE(174), 1,
      sym_object_statements,
    STATE(28), 7,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_object,
      sym_on_statement,
      sym_text,
      aux_sym_object_statements_repeat1,
  [1033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(180), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(243), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(247), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(251), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(255), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(259), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(263), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(267), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(271), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(275), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(279), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(283), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(287), 13,
      anon_sym_title,
      anon_sym_by,
      anon_sym_author,
      anon_sym_version,
      anon_sym_created,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_enter,
      anon_sym_location,
      anon_sym_object,
      sym_name,
  [1333] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(83), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(85), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1358] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(76), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(78), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1383] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    STATE(44), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(89), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(91), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1408] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(146), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(148), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_exit_statement_repeat1,
    ACTIONS(296), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(298), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    STATE(56), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(83), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(85), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [1480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(189), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(191), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1504] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_exit_statement_repeat1,
    ACTIONS(307), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(309), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(76), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(78), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [1552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(140), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(142), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(156), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1600] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    ACTIONS(323), 1,
      anon_sym_it,
    ACTIONS(326), 1,
      anon_sym_they,
    ACTIONS(329), 1,
      anon_sym_traits,
    ACTIONS(332), 1,
      anon_sym_states,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      sym_name,
    STATE(54), 5,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_text,
      aux_sym_on_statements_repeat1,
  [1632] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    ACTIONS(343), 1,
      anon_sym_it,
    ACTIONS(345), 1,
      anon_sym_they,
    ACTIONS(347), 1,
      anon_sym_traits,
    ACTIONS(349), 1,
      anon_sym_states,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      sym_name,
    STATE(54), 5,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_text,
      aux_sym_on_statements_repeat1,
  [1664] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(89), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(91), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [1688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(171), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(173), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1712] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_exit_statement_repeat1,
    ACTIONS(358), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(360), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1736] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(178), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(180), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(165), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(167), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(78), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(185), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(187), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(161), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(163), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1852] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_it,
    ACTIONS(345), 1,
      anon_sym_they,
    ACTIONS(347), 1,
      anon_sym_traits,
    ACTIONS(349), 1,
      anon_sym_states,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      sym_name,
    STATE(176), 1,
      sym_on_statements,
    STATE(55), 5,
      sym_is_statement,
      sym_trait_statement,
      sym_state_statement,
      sym_text,
      aux_sym_on_statements_repeat1,
  [1884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(367), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1903] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(140), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(142), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [1926] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(298), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(180), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [1964] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(189), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(191), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [1987] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(146), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(148), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2010] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(161), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(163), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2033] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(165), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(167), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(178), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(180), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(156), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(221), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(185), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(187), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(78), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(173), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(171), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(173), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(156), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(251), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(283), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(180), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(309), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(156), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(173), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(221), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(279), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(267), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2386] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(76), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(78), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2408] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(259), 8,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_exit,
      anon_sym_exits,
      anon_sym_object,
      sym_name,
  [2426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(89), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(91), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_PIPE,
    STATE(92), 1,
      aux_sym_state_def_repeat1,
    ACTIONS(83), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(85), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(251), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2487] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(189), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(191), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(393), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2525] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(161), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(163), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(259), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2563] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(165), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(167), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(279), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_LBRACE,
    ACTIONS(78), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(185), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(187), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(140), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(142), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2660] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(178), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(180), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(283), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_trait_list_repeat1,
    ACTIONS(171), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(173), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_is_statement_repeat1,
    ACTIONS(146), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(148), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(267), 7,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      anon_sym_object,
      anon_sym_on,
      sym_name,
  [2757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_state_list_repeat1,
    ACTIONS(154), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(156), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(156), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(180), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(173), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_LBRACE,
    ACTIONS(221), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(67), 1,
      sym_exit_def,
    STATE(202), 1,
      sym_exit,
    ACTIONS(408), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [2860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_exit_def,
    STATE(202), 1,
      sym_exit,
    ACTIONS(408), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [2878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 1,
      sym_exit_def,
    STATE(202), 1,
      sym_exit,
    ACTIONS(408), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [2896] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      sym_comment,
    STATE(132), 1,
      sym_text,
    ACTIONS(414), 2,
      sym_words,
      sym_newline,
    STATE(126), 2,
      sym_code,
      aux_sym_text_repeat1,
  [2917] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(420), 2,
      sym_words,
      sym_newline,
    STATE(125), 2,
      sym_code,
      aux_sym_text_repeat1,
  [2938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(267), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2953] = 6,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(427), 2,
      sym_words,
      sym_newline,
    STATE(120), 2,
      sym_code,
      aux_sym_text_repeat1,
  [2974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(279), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [2989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(283), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [3004] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(432), 2,
      sym_words,
      sym_newline,
    STATE(124), 2,
      sym_code,
      aux_sym_text_repeat1,
  [3025] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(436), 2,
      sym_words,
      sym_newline,
    STATE(120), 2,
      sym_code,
      aux_sym_text_repeat1,
  [3046] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(436), 2,
      sym_words,
      sym_newline,
    STATE(120), 2,
      sym_code,
      aux_sym_text_repeat1,
  [3067] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(436), 2,
      sym_words,
      sym_newline,
    STATE(120), 2,
      sym_code,
      aux_sym_text_repeat1,
  [3088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
    ACTIONS(251), 5,
      anon_sym_it,
      anon_sym_they,
      anon_sym_traits,
      anon_sym_states,
      sym_name,
  [3103] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(436), 2,
      sym_words,
      sym_newline,
    STATE(120), 2,
      sym_code,
      aux_sym_text_repeat1,
  [3124] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(446), 2,
      sym_words,
      sym_newline,
    STATE(130), 2,
      sym_code,
      aux_sym_text_repeat1,
  [3145] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(436), 2,
      sym_words,
      sym_newline,
    STATE(120), 2,
      sym_code,
      aux_sym_text_repeat1,
  [3166] = 6,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_text,
    ACTIONS(452), 2,
      sym_words,
      sym_newline,
    STATE(128), 2,
      sym_code,
      aux_sym_text_repeat1,
  [3187] = 2,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_words,
      sym_newline,
  [3197] = 2,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(279), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_words,
      sym_newline,
  [3207] = 2,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_words,
      sym_newline,
  [3217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_name,
    STATE(49), 1,
      sym_state_def,
    STATE(81), 1,
      sym_state_list,
  [3230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_name,
    STATE(69), 1,
      sym_state_def,
    STATE(94), 1,
      sym_state_list,
  [3243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_name,
    STATE(20), 1,
      sym_state_def,
    STATE(33), 1,
      sym_state_list,
  [3256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_name,
    STATE(52), 1,
      sym_trait_def,
    STATE(82), 1,
      sym_trait_list,
  [3269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_name,
    STATE(11), 1,
      sym_trait_def,
    STATE(41), 1,
      sym_trait_list,
  [3282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_name,
    STATE(66), 1,
      sym_trait_def,
    STATE(105), 1,
      sym_trait_list,
  [3295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_name,
    STATE(103), 1,
      sym_trait_def,
    STATE(122), 1,
      sym_trait_list,
  [3308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_name,
    STATE(95), 1,
      sym_state_def,
    STATE(127), 1,
      sym_state_list,
  [3321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_name,
    STATE(112), 1,
      sym_trait_def,
  [3331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_text,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_name,
    STATE(110), 1,
      sym_state_def,
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_text,
  [3361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_name,
    STATE(85), 1,
      sym_state_def,
  [3371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_name,
    STATE(27), 1,
      sym_state_def,
  [3381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_name,
    STATE(86), 1,
      sym_trait_def,
  [3391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_name,
    STATE(25), 1,
      sym_trait_def,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_text,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_is,
      anon_sym_are,
  [3419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_is,
      anon_sym_are,
  [3427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_name,
    STATE(74), 1,
      sym_state_def,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_is,
      anon_sym_are,
  [3445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_name,
    STATE(78), 1,
      sym_trait_def,
  [3455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_LBRACK,
    ACTIONS(480), 1,
      sym_name,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_is,
      anon_sym_are,
  [3473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_PIPE,
  [3480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym_name,
  [3487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [3494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
  [3501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_LBRACK,
  [3508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_PIPE,
  [3515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_name,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
  [3529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_name,
  [3536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_name,
  [3543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_name,
  [3550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_name,
  [3557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_name,
  [3564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_name,
  [3571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_name,
  [3578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [3585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_name,
  [3592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
  [3599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_are,
  [3606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_name,
  [3613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_is,
  [3620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_name,
  [3627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_name,
  [3634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_name,
  [3641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_name,
  [3648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_name,
  [3655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
  [3662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_name,
  [3669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
  [3676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_name,
  [3683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
  [3690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
  [3697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_float,
  [3704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      sym_name,
  [3711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_name,
  [3718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym_name,
  [3725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RBRACK,
  [3732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_name,
  [3739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_name,
  [3746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      sym_name,
  [3753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_to,
  [3760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_is,
  [3767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_are,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_to,
  [3781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_PIPE,
  [3788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_PIPE,
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACK,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_is,
  [3809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_are,
  [3816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_LBRACK,
  [3823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_PIPE,
  [3830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_PIPE,
  [3837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
  [3844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_is,
  [3851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_are,
  [3858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym_name,
  [3865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_PIPE,
  [3872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_PIPE,
  [3879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_LBRACK,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_LBRACK,
  [3893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym_name,
  [3900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 286,
  [SMALL_STATE(8)] = 316,
  [SMALL_STATE(9)] = 346,
  [SMALL_STATE(10)] = 389,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 461,
  [SMALL_STATE(13)] = 490,
  [SMALL_STATE(14)] = 533,
  [SMALL_STATE(15)] = 562,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 620,
  [SMALL_STATE(18)] = 649,
  [SMALL_STATE(19)] = 678,
  [SMALL_STATE(20)] = 707,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 801,
  [SMALL_STATE(24)] = 825,
  [SMALL_STATE(25)] = 865,
  [SMALL_STATE(26)] = 889,
  [SMALL_STATE(27)] = 929,
  [SMALL_STATE(28)] = 953,
  [SMALL_STATE(29)] = 993,
  [SMALL_STATE(30)] = 1033,
  [SMALL_STATE(31)] = 1057,
  [SMALL_STATE(32)] = 1080,
  [SMALL_STATE(33)] = 1103,
  [SMALL_STATE(34)] = 1126,
  [SMALL_STATE(35)] = 1149,
  [SMALL_STATE(36)] = 1172,
  [SMALL_STATE(37)] = 1195,
  [SMALL_STATE(38)] = 1218,
  [SMALL_STATE(39)] = 1241,
  [SMALL_STATE(40)] = 1264,
  [SMALL_STATE(41)] = 1287,
  [SMALL_STATE(42)] = 1310,
  [SMALL_STATE(43)] = 1333,
  [SMALL_STATE(44)] = 1358,
  [SMALL_STATE(45)] = 1383,
  [SMALL_STATE(46)] = 1408,
  [SMALL_STATE(47)] = 1432,
  [SMALL_STATE(48)] = 1456,
  [SMALL_STATE(49)] = 1480,
  [SMALL_STATE(50)] = 1504,
  [SMALL_STATE(51)] = 1528,
  [SMALL_STATE(52)] = 1552,
  [SMALL_STATE(53)] = 1576,
  [SMALL_STATE(54)] = 1600,
  [SMALL_STATE(55)] = 1632,
  [SMALL_STATE(56)] = 1664,
  [SMALL_STATE(57)] = 1688,
  [SMALL_STATE(58)] = 1712,
  [SMALL_STATE(59)] = 1736,
  [SMALL_STATE(60)] = 1760,
  [SMALL_STATE(61)] = 1784,
  [SMALL_STATE(62)] = 1804,
  [SMALL_STATE(63)] = 1828,
  [SMALL_STATE(64)] = 1852,
  [SMALL_STATE(65)] = 1884,
  [SMALL_STATE(66)] = 1903,
  [SMALL_STATE(67)] = 1926,
  [SMALL_STATE(68)] = 1945,
  [SMALL_STATE(69)] = 1964,
  [SMALL_STATE(70)] = 1987,
  [SMALL_STATE(71)] = 2010,
  [SMALL_STATE(72)] = 2033,
  [SMALL_STATE(73)] = 2056,
  [SMALL_STATE(74)] = 2079,
  [SMALL_STATE(75)] = 2098,
  [SMALL_STATE(76)] = 2117,
  [SMALL_STATE(77)] = 2140,
  [SMALL_STATE(78)] = 2159,
  [SMALL_STATE(79)] = 2178,
  [SMALL_STATE(80)] = 2201,
  [SMALL_STATE(81)] = 2224,
  [SMALL_STATE(82)] = 2242,
  [SMALL_STATE(83)] = 2260,
  [SMALL_STATE(84)] = 2278,
  [SMALL_STATE(85)] = 2296,
  [SMALL_STATE(86)] = 2314,
  [SMALL_STATE(87)] = 2332,
  [SMALL_STATE(88)] = 2350,
  [SMALL_STATE(89)] = 2368,
  [SMALL_STATE(90)] = 2386,
  [SMALL_STATE(91)] = 2408,
  [SMALL_STATE(92)] = 2426,
  [SMALL_STATE(93)] = 2448,
  [SMALL_STATE(94)] = 2470,
  [SMALL_STATE(95)] = 2487,
  [SMALL_STATE(96)] = 2508,
  [SMALL_STATE(97)] = 2525,
  [SMALL_STATE(98)] = 2546,
  [SMALL_STATE(99)] = 2563,
  [SMALL_STATE(100)] = 2584,
  [SMALL_STATE(101)] = 2601,
  [SMALL_STATE(102)] = 2618,
  [SMALL_STATE(103)] = 2639,
  [SMALL_STATE(104)] = 2660,
  [SMALL_STATE(105)] = 2681,
  [SMALL_STATE(106)] = 2698,
  [SMALL_STATE(107)] = 2719,
  [SMALL_STATE(108)] = 2740,
  [SMALL_STATE(109)] = 2757,
  [SMALL_STATE(110)] = 2778,
  [SMALL_STATE(111)] = 2794,
  [SMALL_STATE(112)] = 2810,
  [SMALL_STATE(113)] = 2826,
  [SMALL_STATE(114)] = 2842,
  [SMALL_STATE(115)] = 2860,
  [SMALL_STATE(116)] = 2878,
  [SMALL_STATE(117)] = 2896,
  [SMALL_STATE(118)] = 2917,
  [SMALL_STATE(119)] = 2938,
  [SMALL_STATE(120)] = 2953,
  [SMALL_STATE(121)] = 2974,
  [SMALL_STATE(122)] = 2989,
  [SMALL_STATE(123)] = 3004,
  [SMALL_STATE(124)] = 3025,
  [SMALL_STATE(125)] = 3046,
  [SMALL_STATE(126)] = 3067,
  [SMALL_STATE(127)] = 3088,
  [SMALL_STATE(128)] = 3103,
  [SMALL_STATE(129)] = 3124,
  [SMALL_STATE(130)] = 3145,
  [SMALL_STATE(131)] = 3166,
  [SMALL_STATE(132)] = 3187,
  [SMALL_STATE(133)] = 3197,
  [SMALL_STATE(134)] = 3207,
  [SMALL_STATE(135)] = 3217,
  [SMALL_STATE(136)] = 3230,
  [SMALL_STATE(137)] = 3243,
  [SMALL_STATE(138)] = 3256,
  [SMALL_STATE(139)] = 3269,
  [SMALL_STATE(140)] = 3282,
  [SMALL_STATE(141)] = 3295,
  [SMALL_STATE(142)] = 3308,
  [SMALL_STATE(143)] = 3321,
  [SMALL_STATE(144)] = 3331,
  [SMALL_STATE(145)] = 3341,
  [SMALL_STATE(146)] = 3351,
  [SMALL_STATE(147)] = 3361,
  [SMALL_STATE(148)] = 3371,
  [SMALL_STATE(149)] = 3381,
  [SMALL_STATE(150)] = 3391,
  [SMALL_STATE(151)] = 3401,
  [SMALL_STATE(152)] = 3411,
  [SMALL_STATE(153)] = 3419,
  [SMALL_STATE(154)] = 3427,
  [SMALL_STATE(155)] = 3437,
  [SMALL_STATE(156)] = 3445,
  [SMALL_STATE(157)] = 3455,
  [SMALL_STATE(158)] = 3465,
  [SMALL_STATE(159)] = 3473,
  [SMALL_STATE(160)] = 3480,
  [SMALL_STATE(161)] = 3487,
  [SMALL_STATE(162)] = 3494,
  [SMALL_STATE(163)] = 3501,
  [SMALL_STATE(164)] = 3508,
  [SMALL_STATE(165)] = 3515,
  [SMALL_STATE(166)] = 3522,
  [SMALL_STATE(167)] = 3529,
  [SMALL_STATE(168)] = 3536,
  [SMALL_STATE(169)] = 3543,
  [SMALL_STATE(170)] = 3550,
  [SMALL_STATE(171)] = 3557,
  [SMALL_STATE(172)] = 3564,
  [SMALL_STATE(173)] = 3571,
  [SMALL_STATE(174)] = 3578,
  [SMALL_STATE(175)] = 3585,
  [SMALL_STATE(176)] = 3592,
  [SMALL_STATE(177)] = 3599,
  [SMALL_STATE(178)] = 3606,
  [SMALL_STATE(179)] = 3613,
  [SMALL_STATE(180)] = 3620,
  [SMALL_STATE(181)] = 3627,
  [SMALL_STATE(182)] = 3634,
  [SMALL_STATE(183)] = 3641,
  [SMALL_STATE(184)] = 3648,
  [SMALL_STATE(185)] = 3655,
  [SMALL_STATE(186)] = 3662,
  [SMALL_STATE(187)] = 3669,
  [SMALL_STATE(188)] = 3676,
  [SMALL_STATE(189)] = 3683,
  [SMALL_STATE(190)] = 3690,
  [SMALL_STATE(191)] = 3697,
  [SMALL_STATE(192)] = 3704,
  [SMALL_STATE(193)] = 3711,
  [SMALL_STATE(194)] = 3718,
  [SMALL_STATE(195)] = 3725,
  [SMALL_STATE(196)] = 3732,
  [SMALL_STATE(197)] = 3739,
  [SMALL_STATE(198)] = 3746,
  [SMALL_STATE(199)] = 3753,
  [SMALL_STATE(200)] = 3760,
  [SMALL_STATE(201)] = 3767,
  [SMALL_STATE(202)] = 3774,
  [SMALL_STATE(203)] = 3781,
  [SMALL_STATE(204)] = 3788,
  [SMALL_STATE(205)] = 3795,
  [SMALL_STATE(206)] = 3802,
  [SMALL_STATE(207)] = 3809,
  [SMALL_STATE(208)] = 3816,
  [SMALL_STATE(209)] = 3823,
  [SMALL_STATE(210)] = 3830,
  [SMALL_STATE(211)] = 3837,
  [SMALL_STATE(212)] = 3844,
  [SMALL_STATE(213)] = 3851,
  [SMALL_STATE(214)] = 3858,
  [SMALL_STATE(215)] = 3865,
  [SMALL_STATE(216)] = 3872,
  [SMALL_STATE(217)] = 3879,
  [SMALL_STATE(218)] = 3886,
  [SMALL_STATE(219)] = 3893,
  [SMALL_STATE(220)] = 3900,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(151),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(146),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(191),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(144),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(179),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(177),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(139),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(137),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(169),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(168),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(167),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(118),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(152),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_def_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_def_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_def_repeat1, 2), SHIFT_REPEAT(198),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_def, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_def, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_def, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_def, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_location_statements_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(200),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(201),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(138),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(135),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(115),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(116),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(219),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(117),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_location_statements_repeat1, 2), SHIFT_REPEAT(153),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_list, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_list, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_statement, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_statement, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location_statements, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_state_list_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_state_list_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_list_repeat1, 2), SHIFT_REPEAT(148),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_list, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_list, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_list, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_list, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_list_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_trait_list_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_list_repeat1, 2), SHIFT_REPEAT(150),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_is_statement_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_is_statement_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_is_statement_repeat1, 2), SHIFT_REPEAT(188),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_statement, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_is_statement, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_list, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_list, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_statements_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_statements_repeat1, 2), SHIFT_REPEAT(206),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_statements_repeat1, 2), SHIFT_REPEAT(207),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_statements_repeat1, 2), SHIFT_REPEAT(140),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_statements_repeat1, 2), SHIFT_REPEAT(136),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_statements_repeat1, 2), SHIFT_REPEAT(220),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_statements_repeat1, 2), SHIFT_REPEAT(193),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_statements_repeat1, 2), SHIFT_REPEAT(129),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_statements_repeat1, 2), SHIFT_REPEAT(155),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_def, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_def, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_statements, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_statement, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_statement, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_def, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_def, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_state_statement, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_state_statement, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter_statement, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enter_statement, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_def, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_def, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_def, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_version_def, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_statement, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_statement, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_def, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author_def, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_def_repeat1, 2), SHIFT_REPEAT(175),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exit_statement_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_exit_statement_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exit_statement_repeat1, 2), SHIFT_REPEAT(114),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_def_repeat1, 2), SHIFT_REPEAT(186),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_list_repeat1, 2), SHIFT_REPEAT(154),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_on_statements_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_on_statements_repeat1, 2), SHIFT_REPEAT(212),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_on_statements_repeat1, 2), SHIFT_REPEAT(213),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_on_statements_repeat1, 2), SHIFT_REPEAT(141),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_on_statements_repeat1, 2), SHIFT_REPEAT(142),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_statements_repeat1, 2), SHIFT_REPEAT(131),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_on_statements_repeat1, 2), SHIFT_REPEAT(158),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_statements, 1),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_list_repeat1, 2), SHIFT_REPEAT(156),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_statement, 3),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_is_statement_repeat1, 2), SHIFT_REPEAT(173),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_def, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exit_def, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_is_statement_repeat1, 2), SHIFT_REPEAT(184),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_list_repeat1, 2), SHIFT_REPEAT(149),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_list_repeat1, 2), SHIFT_REPEAT(147),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_def_repeat1, 2), SHIFT_REPEAT(197),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_statement, 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_statement, 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_is_statement_repeat1, 2), SHIFT_REPEAT(196),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_list_repeat1, 2), SHIFT_REPEAT(143),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_state_list_repeat1, 2), SHIFT_REPEAT(145),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(123),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(120),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [576] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_spork(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
