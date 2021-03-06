// This file was generated by qlalr - DO NOT EDIT!
#ifndef GEDAELEMENTGRAMMAR_P_H
#define GEDAELEMENTGRAMMAR_P_H

class GedaElementGrammar
{
public:
	enum {
		EOF_SYMBOL = 0,
		ATTRIBUTE = 7,
		ELEMENT = 1,
		ELEMENTARC = 6,
		ELEMENTLINE = 5,
		HEXNUMBER = 14,
		LEFTBRACKET = 10,
		LEFTPAREN = 8,
		MARK = 4,
		NUMBER = 12,
		PAD = 2,
		PIN = 3,
		RIGHTBRACKET = 11,
		RIGHTPAREN = 9,
		STRING = 13,

		ACCEPT_STATE = 189,
		RULE_COUNT = 104,
		STATE_COUNT = 190,
		TERMINAL_COUNT = 15,
		NON_TERMINAL_COUNT = 85,

		GOTO_INDEX_OFFSET = 190,
		GOTO_INFO_OFFSET = 73,
		GOTO_CHECK_OFFSET = 73
	};

	static const char  *const spell [];
	static const int            lhs [];
	static const int            rhs [];

#ifndef QLALR_NO_GEDAELEMENTGRAMMAR_DEBUG_INFO
	static const int     rule_index [];
	static const int      rule_info [];
#endif // QLALR_NO_GEDAELEMENTGRAMMAR_DEBUG_INFO

	static const int   goto_default [];
	static const int action_default [];
	static const int   action_index [];
	static const int    action_info [];
	static const int   action_check [];

	static inline int nt_action (int state, int nt)
	{
		const int *const goto_index = &action_index [GOTO_INDEX_OFFSET];
		const int *const goto_check = &action_check [GOTO_CHECK_OFFSET];

		const int yyn = goto_index [state] + nt;

		if (yyn < 0 || goto_check [yyn] != nt)
			return goto_default [nt];

		const int *const goto_info = &action_info [GOTO_INFO_OFFSET];
		return goto_info [yyn];
	}

	static inline int t_action (int state, int token)
	{
		const int yyn = action_index [state] + token;

		if (yyn < 0 || action_check [yyn] != token)
			return - action_default [state];

		return action_info [yyn];
	}
};


#endif // GEDAELEMENTGRAMMAR_P_H
