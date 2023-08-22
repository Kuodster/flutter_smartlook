import 'package:flutter/material.dart';
import 'package:flutter_smartlook/flutter_smartlook.dart';

/// Tracks pushed, popped Screens and [AlertDialog]
class SmartlookObserver extends RouteObserver<PageRoute<dynamic>> {
  @override
  void didPush(Route<dynamic>? route, Route<dynamic>? previousRoute) {
    if (route == null) return;
    super.didPush(route, previousRoute);
    if (route is PageRoute) {
      if (route is MaterialPageRoute) {
        String? widgetName;
        final context = navigator?.context;
        if (context != null) {
          widgetName = route.builder(context).runtimeType.toString();
        }
        final String? routeName = route.settings.name ?? widgetName;
        if (routeName != null) {
          Smartlook.instance.trackNavigationEnter(routeName);
        }
      }
    }
  }

  @override
  void didPop(Route<dynamic>? route, Route<dynamic>? previousRoute) {
    if (route == null) return;
    super.didPop(route, previousRoute);
    if (previousRoute is PageRoute && route is PageRoute) {
      if (previousRoute is MaterialPageRoute) {
        String? widgetName;
        final context = navigator?.context;
        if (context != null) {
          widgetName = previousRoute.builder(context).runtimeType.toString();
        }
        final String? routeName = previousRoute.settings.name ?? widgetName;
        if (routeName != null) {
          Smartlook.instance.trackNavigationExit(routeName);
        }
      }
    }
  }
}
