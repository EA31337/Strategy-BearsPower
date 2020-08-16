/*
 * @file
 * Defines default strategy parameter values for the given timeframe.
 */

// Defines indicator's parameter values for the given pair symbol and timeframe.
struct Indi_BearsPower_Params_H1 : Indi_BearsPower_Params {
  Indi_BearsPower_Params_H1() : Indi_BearsPower_Params(indi_bears_defaults, PERIOD_H1) { shift = 0; }
} indi_bears_h1;

// Defines strategy's parameter values for the given pair symbol and timeframe.
struct Stg_bears_Params_H1 : StgParams {
  // Struct constructor.
  Stg_bears_Params_H1() : StgParams(stg_bears_defaults) {
    lot_size = 0;
    signal_open_method = 0;
    signal_open_filter = 1;
    signal_open_level = 0;
    signal_open_boost = 0;
    signal_close_method = 0;
    signal_close_level = 0;
    price_limit_method = 0;
    price_limit_level = 2;
    tick_filter_method = 1;
    max_spread = 0;
  }
} stg_bears_h1;
