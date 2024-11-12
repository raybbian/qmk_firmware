const uint16_t PROGMEM at_combo[] = {KC_2, KC_W, COMBO_END};
const uint16_t PROGMEM hash_combo[] = {KC_3, KC_F, COMBO_END};
const uint16_t PROGMEM dlr_combo[] = {KC_4, KC_P, COMBO_END};
const uint16_t PROGMEM perc_combo[] = {KC_5, KC_B, COMBO_END};
const uint16_t PROGMEM circ_combo[] = {KC_6, KC_J, COMBO_END};
const uint16_t PROGMEM plus_combo[] = {KC_7, KC_L, COMBO_END};
const uint16_t PROGMEM astr_combo[] = {KC_8, KC_U, COMBO_END};
const uint16_t PROGMEM ampr_combo[] = {KC_9, KC_Y, COMBO_END};

const uint16_t PROGMEM grv_combo[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM bsls_combo[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM eql_combo[] = {KC_P, KC_T, COMBO_END};
const uint16_t PROGMEM tild_combo[] = {KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM exlm_combo[] = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM mins_combo[] = {KC_L, KC_N, COMBO_END};
const uint16_t PROGMEM slsh_combo[] = {KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM pipe_combo[] = {KC_Y, KC_I, COMBO_END};

const uint16_t PROGMEM lbrc_combo[] = {KC_R, KC_X, COMBO_END};
const uint16_t PROGMEM lcbr_combo[] = {KC_S, KC_C, COMBO_END};
const uint16_t PROGMEM lprn_combo[] = {KC_T, KC_D, COMBO_END};
const uint16_t PROGMEM labk_combo[] = {KC_G, KC_V, COMBO_END};
const uint16_t PROGMEM rabk_combo[] = {KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_N, KC_H, COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = {KC_E, KC_COMM, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_I, KC_DOT, COMBO_END};

combo_t key_combos[] = {
    COMBO(at_combo, KC_AT),
    COMBO(hash_combo, KC_HASH),
    COMBO(dlr_combo, KC_DLR),
    COMBO(perc_combo, KC_PERC),
    COMBO(circ_combo, KC_CIRC),
    COMBO(plus_combo, KC_PLUS),
    COMBO(astr_combo, KC_ASTR),
    COMBO(ampr_combo, KC_AMPR),

    COMBO(grv_combo, KC_GRV),
    COMBO(bsls_combo, KC_BSLS),
    COMBO(eql_combo, KC_EQL),
    COMBO(tild_combo, KC_TILD),
    COMBO(exlm_combo, KC_EXLM),
    COMBO(mins_combo, KC_MINS),
    COMBO(slsh_combo, KC_SLSH),
    COMBO(pipe_combo, KC_PIPE),

    COMBO(lbrc_combo, KC_LBRC),
    COMBO(lcbr_combo, KC_LCBR),
    COMBO(lprn_combo, KC_LPRN),
    COMBO(labk_combo, KC_LABK),
    COMBO(rabk_combo, KC_RABK),
    COMBO(rprn_combo, KC_RPRN),
    COMBO(rcbr_combo, KC_RCBR),
    COMBO(rbrc_combo, KC_RBRC),
};

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    return layer_state_is(_COLEMAKDH) || layer_state_is(_QWERTY);
}
