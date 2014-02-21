/*
 *  linux/drivers/devfreq/governor_powersave.c
 *
 *  Copyright (C) 2011 Samsung Electronics
 *	MyungJoo Ham <myungjoo.ham@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/devfreq.h>
#include "governor.h"

static int devfreq_powersave_func(struct devfreq *df,
				  unsigned long *freq)
{
	/*
	 * target callback should be able to get ceiling value as
	 * said in devfreq.h
	 */
	*freq = df->min_freq;
	return 0;
}

static int devfreq_powersave_handler(struct devfreq *devfreq,
				unsigned int event, void *data)
{
	int ret = 0;

	if (event == DEVFREQ_GOV_START) {
		mutex_lock(&devfreq->lock);
		ret = update_devfreq(devfreq);
		mutex_unlock(&devfreq->lock);
	}

	return ret;
}

const struct devfreq_governor devfreq_powersave = {
	.name = "powersave",
	.get_target_freq = devfreq_powersave_func,
	.event_handler = devfreq_powersave_handler,
};