// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001-2007 International Computer Science Institute
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software")
// to deal in the Software without restriction, subject to the conditions
// listed in the XORP LICENSE file. These conditions include: you must
// preserve this copyright notice, and you cannot mention the copyright
// holders in advertising related to the Software without their permission.
// The Software is provided WITHOUT ANY WARRANTY, EXPRESS OR IMPLIED. This
// notice is a summary of the XORP LICENSE file; the license in that file is
// legally binding.

#ident "$XORP: xorp/fea/fibconfig_entry_get.cc,v 1.2 2007/04/27 01:10:27 pavlin Exp $"

#include "fea_module.h"

#include "libxorp/xorp.h"
#include "libxorp/xlog.h"
#include "libxorp/debug.h"

#include "fibconfig.hh"
#include "fibconfig_entry_get.hh"


//
// Get single-entry information from the unicast forwarding table.
//


FibConfigEntryGet::FibConfigEntryGet(FibConfig& fibconfig)
    : _is_running(false),
      _fibconfig(fibconfig),
      _is_primary(true)
{
}

FibConfigEntryGet::~FibConfigEntryGet()
{
}

void
FibConfigEntryGet::register_fibconfig_primary()
{
    _fibconfig.register_fibconfig_entry_get_primary(this);
}

void
FibConfigEntryGet::register_fibconfig_secondary()
{
    _fibconfig.register_fibconfig_entry_get_secondary(this);
}
