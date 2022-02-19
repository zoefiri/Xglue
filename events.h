#ifndef  EVENTS_H
#define  EVENTS_H

#include <stdlib.h>
#include <xcb/xcb.h>

typedef struct {
   uint32_t ev;
   void(*fp)(xcb_connection_t *c, xcb_generic_event_t *ev);
} handler_t;

void map_request_handler(xcb_connection_t *c, xcb_generic_event_t *ev);
void destroy_handler(xcb_connection_t *c, xcb_generic_event_t *ev);

static handler_t custom_handlers[] {
   {0x0, NULL},
   {0x1, NULL},
   {XCB_KEY_PRESS, NULL},
   {XCB_KEY_RELEASE, NULL},
   {XCB_BUTTON_PRESS, NULL},
   {XCB_BUTTON_RELEASE, NULL},
   {XCB_MOTION_NOTIFY, NULL},
   {XCB_ENTER_NOTIFY, NULL},
   {XCB_LEAVE_NOTIFY, NULL},
   {XCB_FOCUS_IN, NULL},
   {XCB_FOCUS_OUT, NULL},
   {XCB_KEYMAP_NOTIFY, NULL},
   {XCB_EXPOSE, NULL},
   {XCB_GRAPHICS_EXPOSURE, NULL},
   {XCB_NO_EXPOSURE, NULL},
   {XCB_VISIBILITY_NOTIFY, NULL},
   {XCB_CREATE_NOTIFY, NULL},
   {XCB_DESTROY_NOTIFY, NULL},
   {XCB_UNMAP_NOTIFY, NULL},
   {XCB_MAP_NOTIFY, NULL},
   {XCB_MAP_REQUEST, NULL},
   {XCB_REPARENT_NOTIFY, NULL},
   {XCB_CONFIGURE_NOTIFY, NULL},
   {XCB_CONFIGURE_REQUEST, NULL},
   {XCB_GRAVITY_NOTIFY, NULL},
   {XCB_RESIZE_REQUEST, NULL},
   {XCB_CIRCULATE_NOTIFY, NULL},
   {XCB_CIRCULATE_REQUEST, NULL},
   {XCB_PROPERTY_NOTIFY, NULL},
   {XCB_SELECTION_CLEAR, NULL},
   {XCB_SELECTION_REQUEST, NULL},
   {XCB_SELECTION_NOTIFY, NULL},
   {XCB_COLORMAP_NOTIFY, NULL},
   {XCB_CLIENT_MESSAGE, NULL},
   {XCB_MAPPING_NOTIFY, NULL},
   {XCB_GE_GENERIC, NULL}
};

static handler_t default_handlers[] {
   {0x0, NULL},
   {0x1, NULL},
   {XCB_KEY_PRESS, NULL},
   {XCB_KEY_RELEASE, NULL},
   {XCB_BUTTON_PRESS, NULL},
   {XCB_BUTTON_RELEASE, NULL},
   {XCB_MOTION_NOTIFY, NULL},
   {XCB_ENTER_NOTIFY, NULL},
   {XCB_LEAVE_NOTIFY, NULL},
   {XCB_FOCUS_IN, NULL},
   {XCB_FOCUS_OUT, NULL},
   {XCB_KEYMAP_NOTIFY, NULL},
   {XCB_EXPOSE, NULL},
   {XCB_GRAPHICS_EXPOSURE, NULL},
   {XCB_NO_EXPOSURE, NULL},
   {XCB_VISIBILITY_NOTIFY, NULL},
   {XCB_CREATE_NOTIFY, NULL},
   {XCB_DESTROY_NOTIFY, destroy_handler},
   {XCB_UNMAP_NOTIFY, NULL},
   {XCB_MAP_NOTIFY, NULL},
   {XCB_MAP_REQUEST, map_request_handler},
   {XCB_REPARENT_NOTIFY, NULL},
   {XCB_CONFIGURE_NOTIFY, NULL},
   {XCB_CONFIGURE_REQUEST, NULL},
   {XCB_GRAVITY_NOTIFY, NULL},
   {XCB_RESIZE_REQUEST, NULL},
   {XCB_CIRCULATE_NOTIFY, NULL},
   {XCB_CIRCULATE_REQUEST, NULL},
   {XCB_PROPERTY_NOTIFY, NULL},
   {XCB_SELECTION_CLEAR, NULL},
   {XCB_SELECTION_REQUEST, NULL},
   {XCB_SELECTION_NOTIFY, NULL},
   {XCB_COLORMAP_NOTIFY, NULL},
   {XCB_CLIENT_MESSAGE, NULL},
   {XCB_MAPPING_NOTIFY, NULL},
   {XCB_GE_GENERIC, NULL}
};

#endif
