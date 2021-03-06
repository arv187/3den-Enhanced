class ENH_Interface
{
  collapsed = 1;
  displayName = "$STR_ENH_INTERFACE";
  class Attributes
  {
    class ENH_CollapseAssetBrowser
    {
      displayName = "$STR_ENH_COLLAPSEASSETBROWSER";
      property = "ENH_CollapseAssetBrowser";
      control = "Checkbox";
      expression = "";
      defaultValue = "false";
    };
    class ENH_CollapseEntityList: ENH_CollapseAssetBrowser
    {
      displayName = "$STR_ENH_COLLAPSEENTITYLIST";
      property = "ENH_CollapseEntityList";
    };
    class ENH_ShowPanelLeft: ENH_CollapseAssetBrowser
    {
      displayName = "$STR_ENH_SHOWLEFTPANEL";
      property = "ENH_ShowPanelLeft";
    };
    class ENH_ShowPanelRight: ENH_CollapseAssetBrowser
    {
      displayName = "$STR_ENH_SHOWRIGHTPANEL";
      property = "ENH_ShowPanelRight";
    };
    class ENH_Statusbar_EntityCounter: ENH_CollapseAssetBrowser
    {
      displayName = "$STR_ENH_STATUSBAR_ENTITYCOUNTER_DISPLAYNAME";
      property = "ENH_Statusbar_EntityCounter";
      expression = "'init' call ENH_fnc_statusbar_entityCounter";
      defaultValue = "true";
    };
    class ENH_MenuStrip_Blacklist: ENH_CollapseAssetBrowser
    {
      displayName = "$STR_ENH_MENUSTRIPENTRIES";
      tooltip = "$STR_ENH_MENUSTRIPENTRIES_TOOLTIP";
      property = "ENH_MenuStrip_Blacklist";
      control = "ENH_MenuStripBlacklist";
      expression = "true";
      defaultValue = "true";
    };
  };
};