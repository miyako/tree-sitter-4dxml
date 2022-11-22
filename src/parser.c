#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  anon_sym_LT_QMARK = 4,
  aux_sym_declaration_token1 = 5,
  anon_sym_QMARK_GT = 6,
  sym__xml = 7,
  sym__doctype = 8,
  anon_sym_LT = 9,
  anon_sym_SLASH_GT = 10,
  anon_sym_LT_SLASH = 11,
  anon_sym_EQ = 12,
  sym_attribute_name = 13,
  sym_attribute_value = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_quoted_attribute_value_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_quoted_attribute_value_token2 = 18,
  anon_sym_SQUOTE_SQUOTE = 19,
  anon_sym_DQUOTE_DQUOTE = 20,
  sym_text = 21,
  sym__start_tag_name = 22,
  sym__end_tag_name = 23,
  sym_erroneous_end_tag_name = 24,
  sym__implicit_end_tag = 25,
  sym_raw_text = 26,
  sym_comment = 27,
  sym_fragment = 28,
  sym_doctype = 29,
  sym_declaration = 30,
  sym__node = 31,
  sym_element = 32,
  sym_start_tag = 33,
  sym_self_closing_tag = 34,
  sym_end_tag = 35,
  sym_erroneous_end_tag = 36,
  sym_attribute = 37,
  sym_quoted_attribute_value = 38,
  sym_quoted_attribute_value_empty = 39,
  aux_sym_fragment_repeat1 = 40,
  aux_sym_start_tag_repeat1 = 41,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LT_QMARK] = "<?",
  [aux_sym_declaration_token1] = "declaration_token1",
  [anon_sym_QMARK_GT] = "?>",
  [sym__xml] = "declaration",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [sym_fragment] = "fragment",
  [sym_doctype] = "doctype",
  [sym_declaration] = "declaration",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_quoted_attribute_value_empty] = "quoted_attribute_value_empty",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [aux_sym_doctype_token1] = aux_sym_doctype_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_QMARK] = anon_sym_LT_QMARK,
  [aux_sym_declaration_token1] = aux_sym_declaration_token1,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [sym__xml] = sym__xml,
  [sym__doctype] = sym__doctype,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [sym_text] = sym_text,
  [sym__start_tag_name] = sym__start_tag_name,
  [sym__end_tag_name] = sym__start_tag_name,
  [sym_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [sym__implicit_end_tag] = sym__implicit_end_tag,
  [sym_raw_text] = sym_raw_text,
  [sym_comment] = sym_comment,
  [sym_fragment] = sym_fragment,
  [sym_doctype] = sym_doctype,
  [sym_declaration] = sym_declaration,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_erroneous_end_tag] = sym_erroneous_end_tag,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_quoted_attribute_value_empty] = sym_quoted_attribute_value_empty,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__xml] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value_empty] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(11);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(25);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(46);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_QMARK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_declaration_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_declaration_token1);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '?') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__xml);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '?') ADVANCE(23);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 17, .external_lex_state = 2},
  [2] = {.lex_state = 17, .external_lex_state = 3},
  [3] = {.lex_state = 17, .external_lex_state = 3},
  [4] = {.lex_state = 17, .external_lex_state = 3},
  [5] = {.lex_state = 17, .external_lex_state = 3},
  [6] = {.lex_state = 17, .external_lex_state = 3},
  [7] = {.lex_state = 17, .external_lex_state = 2},
  [8] = {.lex_state = 17, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 17, .external_lex_state = 2},
  [11] = {.lex_state = 17, .external_lex_state = 2},
  [12] = {.lex_state = 17, .external_lex_state = 3},
  [13] = {.lex_state = 17, .external_lex_state = 3},
  [14] = {.lex_state = 17, .external_lex_state = 3},
  [15] = {.lex_state = 17, .external_lex_state = 2},
  [16] = {.lex_state = 17, .external_lex_state = 2},
  [17] = {.lex_state = 17, .external_lex_state = 3},
  [18] = {.lex_state = 17, .external_lex_state = 3},
  [19] = {.lex_state = 17, .external_lex_state = 3},
  [20] = {.lex_state = 17, .external_lex_state = 3},
  [21] = {.lex_state = 17, .external_lex_state = 2},
  [22] = {.lex_state = 17, .external_lex_state = 2},
  [23] = {.lex_state = 17, .external_lex_state = 3},
  [24] = {.lex_state = 17, .external_lex_state = 2},
  [25] = {.lex_state = 17, .external_lex_state = 3},
  [26] = {.lex_state = 17, .external_lex_state = 2},
  [27] = {.lex_state = 17, .external_lex_state = 3},
  [28] = {.lex_state = 17, .external_lex_state = 2},
  [29] = {.lex_state = 17, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 4},
  [31] = {.lex_state = 2, .external_lex_state = 4},
  [32] = {.lex_state = 2, .external_lex_state = 4},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 2, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 4},
  [36] = {.lex_state = 2, .external_lex_state = 4},
  [37] = {.lex_state = 2, .external_lex_state = 4},
  [38] = {.lex_state = 2, .external_lex_state = 4},
  [39] = {.lex_state = 2, .external_lex_state = 4},
  [40] = {.lex_state = 0, .external_lex_state = 5},
  [41] = {.lex_state = 4, .external_lex_state = 2},
  [42] = {.lex_state = 3, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 5},
  [44] = {.lex_state = 2, .external_lex_state = 2},
  [45] = {.lex_state = 2, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 15, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 7},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 7},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 15, .external_lex_state = 2},
  [63] = {.lex_state = 16, .external_lex_state = 2},
  [64] = {.lex_state = 16, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__start_tag_name = 0,
  ts_external_token__end_tag_name = 1,
  ts_external_token_erroneous_end_tag_name = 2,
  ts_external_token_SLASH_GT = 3,
  ts_external_token__implicit_end_tag = 4,
  ts_external_token_raw_text = 5,
  ts_external_token_comment = 6,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_QMARK] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [sym__xml] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_fragment] = STATE(48),
    [sym_doctype] = STATE(8),
    [sym_declaration] = STATE(8),
    [sym__node] = STATE(8),
    [sym_element] = STATE(8),
    [sym_start_tag] = STATE(5),
    [sym_self_closing_tag] = STATE(15),
    [sym_erroneous_end_tag] = STATE(8),
    [aux_sym_fragment_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT_QMARK] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_SLASH] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(26), 1,
      sym_end_tag,
    STATE(6), 6,
      sym_doctype,
      sym_declaration,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [39] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(31), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(17), 1,
      sym_end_tag,
    STATE(6), 6,
      sym_doctype,
      sym_declaration,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [78] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(35), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_end_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(3), 6,
      sym_doctype,
      sym_declaration,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [117] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LT_BANG,
    ACTIONS(19), 1,
      anon_sym_LT_QMARK,
    ACTIONS(21), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      sym_text,
    ACTIONS(39), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(16), 1,
      sym_end_tag,
    STATE(2), 6,
      sym_doctype,
      sym_declaration,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [156] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LT_BANG,
    ACTIONS(44), 1,
      anon_sym_LT_QMARK,
    ACTIONS(47), 1,
      anon_sym_LT,
    ACTIONS(50), 1,
      anon_sym_LT_SLASH,
    ACTIONS(53), 1,
      sym_text,
    ACTIONS(56), 1,
      sym__implicit_end_tag,
    STATE(4), 1,
      sym_start_tag,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(6), 6,
      sym_doctype,
      sym_declaration,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [192] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_LT_BANG,
    ACTIONS(61), 1,
      anon_sym_LT_QMARK,
    ACTIONS(64), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
      anon_sym_LT_SLASH,
    ACTIONS(70), 1,
      sym_text,
    STATE(5), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(7), 6,
      sym_doctype,
      sym_declaration,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [228] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LT_BANG,
    ACTIONS(9), 1,
      anon_sym_LT_QMARK,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_SLASH,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      sym_text,
    STATE(5), 1,
      sym_start_tag,
    STATE(15), 1,
      sym_self_closing_tag,
    STATE(7), 6,
      sym_doctype,
      sym_declaration,
      sym__node,
      sym_element,
      sym_erroneous_end_tag,
      aux_sym_fragment_repeat1,
  [264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_attribute_value,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 2,
      anon_sym_SQUOTE_SQUOTE,
      anon_sym_DQUOTE_DQUOTE,
    STATE(36), 2,
      sym_quoted_attribute_value,
      sym_quoted_attribute_value_empty,
  [285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(87), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(91), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(93), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(97), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(101), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(101), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(97), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(105), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(87), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(109), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(113), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(93), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(109), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(117), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(123), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(125), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(105), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(123), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(125), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__implicit_end_tag,
      sym_text,
    ACTIONS(91), 4,
      anon_sym_LT_BANG,
      anon_sym_LT_QMARK,
      anon_sym_LT,
      anon_sym_LT_SLASH,
  [565] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(131), 1,
      anon_sym_SLASH_GT,
    ACTIONS(133), 1,
      sym_attribute_name,
    STATE(31), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_attribute_name,
    ACTIONS(135), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_attribute_name,
    ACTIONS(140), 1,
      anon_sym_GT,
    ACTIONS(142), 1,
      anon_sym_SLASH_GT,
    STATE(34), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [614] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_attribute_name,
    ACTIONS(140), 1,
      anon_sym_GT,
    ACTIONS(144), 1,
      anon_sym_SLASH_GT,
    STATE(30), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_GT,
    ACTIONS(133), 1,
      sym_attribute_name,
    ACTIONS(146), 1,
      anon_sym_SLASH_GT,
    STATE(31), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_EQ,
    ACTIONS(148), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym__end_tag_name,
    ACTIONS(162), 1,
      sym_erroneous_end_tag_name,
  [706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      aux_sym_quoted_attribute_value_token1,
  [716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      aux_sym_quoted_attribute_value_token2,
  [726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_erroneous_end_tag_name,
    ACTIONS(170), 1,
      sym__end_tag_name,
  [736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
  [743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_erroneous_end_tag_name,
  [757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_doctype_token1,
  [764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym__doctype,
  [778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_GT,
  [785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_QMARK_GT,
  [792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym__start_tag_name,
  [799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_GT,
  [806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_GT,
  [813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym__xml,
  [820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_GT,
  [827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_QMARK_GT,
  [834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_GT,
  [841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_GT,
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym__start_tag_name,
  [855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_erroneous_end_tag_name,
  [862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_doctype_token1,
  [869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym_declaration_token1,
  [876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym_declaration_token1,
  [883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym__doctype,
  [890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__xml,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 264,
  [SMALL_STATE(10)] = 285,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 327,
  [SMALL_STATE(14)] = 341,
  [SMALL_STATE(15)] = 355,
  [SMALL_STATE(16)] = 369,
  [SMALL_STATE(17)] = 383,
  [SMALL_STATE(18)] = 397,
  [SMALL_STATE(19)] = 411,
  [SMALL_STATE(20)] = 425,
  [SMALL_STATE(21)] = 439,
  [SMALL_STATE(22)] = 453,
  [SMALL_STATE(23)] = 467,
  [SMALL_STATE(24)] = 481,
  [SMALL_STATE(25)] = 495,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 523,
  [SMALL_STATE(28)] = 537,
  [SMALL_STATE(29)] = 551,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 582,
  [SMALL_STATE(32)] = 597,
  [SMALL_STATE(33)] = 614,
  [SMALL_STATE(34)] = 631,
  [SMALL_STATE(35)] = 648,
  [SMALL_STATE(36)] = 660,
  [SMALL_STATE(37)] = 669,
  [SMALL_STATE(38)] = 678,
  [SMALL_STATE(39)] = 687,
  [SMALL_STATE(40)] = 696,
  [SMALL_STATE(41)] = 706,
  [SMALL_STATE(42)] = 716,
  [SMALL_STATE(43)] = 726,
  [SMALL_STATE(44)] = 736,
  [SMALL_STATE(45)] = 743,
  [SMALL_STATE(46)] = 750,
  [SMALL_STATE(47)] = 757,
  [SMALL_STATE(48)] = 764,
  [SMALL_STATE(49)] = 771,
  [SMALL_STATE(50)] = 778,
  [SMALL_STATE(51)] = 785,
  [SMALL_STATE(52)] = 792,
  [SMALL_STATE(53)] = 799,
  [SMALL_STATE(54)] = 806,
  [SMALL_STATE(55)] = 813,
  [SMALL_STATE(56)] = 820,
  [SMALL_STATE(57)] = 827,
  [SMALL_STATE(58)] = 834,
  [SMALL_STATE(59)] = 841,
  [SMALL_STATE(60)] = 848,
  [SMALL_STATE(61)] = 855,
  [SMALL_STATE(62)] = 862,
  [SMALL_STATE(63)] = 869,
  [SMALL_STATE(64)] = 876,
  [SMALL_STATE(65)] = 883,
  [SMALL_STATE(66)] = 890,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(65),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(66),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(60),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(61),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(49),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(52),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(46),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_erroneous_end_tag, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_erroneous_end_tag, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value_empty, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fourdxml_external_scanner_create(void);
void tree_sitter_fourdxml_external_scanner_destroy(void *);
bool tree_sitter_fourdxml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fourdxml_external_scanner_serialize(void *, char *);
void tree_sitter_fourdxml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fourdxml(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_fourdxml_external_scanner_create,
      tree_sitter_fourdxml_external_scanner_destroy,
      tree_sitter_fourdxml_external_scanner_scan,
      tree_sitter_fourdxml_external_scanner_serialize,
      tree_sitter_fourdxml_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
