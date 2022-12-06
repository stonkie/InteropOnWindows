<map version="freeplane 1.9.13">
<!--To view this file, download free mind mapping software Freeplane from https://www.freeplane.org -->
<node LOCALIZED_TEXT="new_mindmap" LOCALIZED_STYLE_REF="AutomaticLayout.level.root" FOLDED="false" ID="ID_1090958577" CREATED="1409300609620" MODIFIED="1606856177697"><hook NAME="MapStyle" background="#2e3440">
    <properties show_icon_for_attributes="true" edgeColorConfiguration="#808080ff,#ff0000ff,#0000ffff,#00ff00ff,#ff00ffff,#00ffffff,#7c0000ff,#00007cff,#007c00ff,#7c007cff,#007c7cff,#7c7c00ff" show_note_icons="true" fit_to_viewport="false" associatedTemplateLocation="template:/dark_nord_template.mm"/>

<map_styles>
<stylenode LOCALIZED_TEXT="styles.root_node" STYLE="oval" UNIFORM_SHAPE="true" VGAP_QUANTITY="24 pt">
<font SIZE="24"/>
<stylenode LOCALIZED_TEXT="styles.predefined" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="default" ID="ID_671184412" ICON_SIZE="12 pt" FORMAT_AS_HYPERLINK="false" COLOR="#484747" BACKGROUND_COLOR="#eceff4" STYLE="bubble" SHAPE_HORIZONTAL_MARGIN="8 pt" SHAPE_VERTICAL_MARGIN="5 pt" BORDER_WIDTH_LIKE_EDGE="false" BORDER_WIDTH="1.9 px" BORDER_COLOR_LIKE_EDGE="true" BORDER_COLOR="#f0f0f0" BORDER_DASH_LIKE_EDGE="true" BORDER_DASH="SOLID">
<arrowlink SHAPE="CUBIC_CURVE" COLOR="#88c0d0" WIDTH="2" TRANSPARENCY="255" DASH="" FONT_SIZE="9" FONT_FAMILY="SansSerif" DESTINATION="ID_671184412" STARTARROW="NONE" ENDARROW="DEFAULT"/>
<font NAME="SansSerif" SIZE="11" BOLD="false" STRIKETHROUGH="false" ITALIC="false"/>
<edge STYLE="bezier" COLOR="#81a1c1" WIDTH="3" DASH="SOLID"/>
<richcontent CONTENT-TYPE="plain/auto" TYPE="DETAILS"/>
<richcontent TYPE="NOTE" CONTENT-TYPE="plain/auto"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.details" BORDER_WIDTH="1.9 px">
<edge STYLE="bezier" COLOR="#81a1c1" WIDTH="3"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.attributes">
<font SIZE="10"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.note" COLOR="#000000" BACKGROUND_COLOR="#ebcb8b">
<icon BUILTIN="clock2"/>
<font SIZE="10"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.floating" COLOR="#484747">
<edge STYLE="hide_edge"/>
<cloud COLOR="#f0f0f0" SHAPE="ROUND_RECT"/>
</stylenode>
<stylenode LOCALIZED_TEXT="defaultstyle.selection" COLOR="#e5e9f0" BACKGROUND_COLOR="#5e81ac" BORDER_COLOR_LIKE_EDGE="false" BORDER_COLOR="#5e81ac"/>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.user-defined" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="styles.important" ID="ID_779275544" BORDER_COLOR_LIKE_EDGE="false" BORDER_COLOR="#bf616a">
<icon BUILTIN="yes"/>
<arrowlink COLOR="#bf616a" TRANSPARENCY="255" DESTINATION="ID_779275544"/>
<font SIZE="14"/>
</stylenode>
</stylenode>
<stylenode LOCALIZED_TEXT="styles.AutomaticLayout" POSITION="right" STYLE="bubble">
<stylenode LOCALIZED_TEXT="AutomaticLayout.level.root" COLOR="#ffffff" BACKGROUND_COLOR="#484747" STYLE="bubble" SHAPE_HORIZONTAL_MARGIN="10 pt" SHAPE_VERTICAL_MARGIN="10 pt">
<font NAME="Ubuntu" SIZE="18"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,1" COLOR="#eceff4" BACKGROUND_COLOR="#d08770" STYLE="bubble" SHAPE_HORIZONTAL_MARGIN="8 pt" SHAPE_VERTICAL_MARGIN="5 pt">
<font NAME="Ubuntu" SIZE="16"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,2" COLOR="#3b4252" BACKGROUND_COLOR="#ebcb8b">
<font SIZE="14"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,3" COLOR="#2e3440" BACKGROUND_COLOR="#a3be8c">
<font SIZE="12"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,4" COLOR="#2e3440" BACKGROUND_COLOR="#b48ead">
<font SIZE="11"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,5" BACKGROUND_COLOR="#81a1c1">
<font SIZE="10"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,6" BACKGROUND_COLOR="#88c0d0">
<font SIZE="10"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,7" BACKGROUND_COLOR="#8fbcbb">
<font SIZE="10"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,8" BACKGROUND_COLOR="#d8dee9">
<font SIZE="10"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,9" BACKGROUND_COLOR="#e5e9f0">
<font SIZE="9"/>
</stylenode>
<stylenode LOCALIZED_TEXT="AutomaticLayout.level,10" BACKGROUND_COLOR="#eceff4">
<font SIZE="9"/>
</stylenode>
</stylenode>
</stylenode>
</map_styles>
</hook>
<hook NAME="accessories/plugins/AutomaticLayout.properties" VALUE="ALL"/>
<font BOLD="true"/>
<node TEXT="Why?" POSITION="right" ID="ID_1581004272" CREATED="1670269639943" MODIFIED="1670270939409">
<node TEXT="High performance or third party" ID="ID_1921695659" CREATED="1670271150406" MODIFIED="1670271176676"/>
</node>
<node TEXT="Show must go on" POSITION="right" ID="ID_1606286390" CREATED="1670271211969" MODIFIED="1670271232139">
<node TEXT="Legacy and strangler pattern" ID="ID_364489254" CREATED="1670271129734" MODIFIED="1670271149715"/>
</node>
<node TEXT="Why not IPC" POSITION="right" ID="ID_1274093249" CREATED="1670271268976" MODIFIED="1670271272124">
<node TEXT="Managing a separate process" ID="ID_1435571520" CREATED="1670271333961" MODIFIED="1670271348028"/>
<node TEXT="Archiver" ID="ID_1108848872" CREATED="1670271348647" MODIFIED="1670271415881">
<node TEXT="stdin/out : a few cases" ID="ID_43537288" CREATED="1670271416728" MODIFIED="1670271429779"/>
<node TEXT="Shared memory" ID="ID_301082044" CREATED="1670271430408" MODIFIED="1670271456843"/>
<node TEXT="Message queue" ID="ID_958798016" CREATED="1670271457576" MODIFIED="1670271461088"/>
<node TEXT="TCP/UDP/REST/gRPC/etc." ID="ID_378568353" CREATED="1670271464031" MODIFIED="1670271479027"/>
</node>
</node>
<node TEXT="Factors" POSITION="right" ID="ID_331588414" CREATED="1670271294103" MODIFIED="1670271307523">
<node TEXT="Orchestration : Keeping a process alive" ID="ID_1714082901" CREATED="1670271518679" MODIFIED="1670271557117"/>
<node TEXT="Performance" ID="ID_1317382466" CREATED="1670271558336" MODIFIED="1670271577088">
<node TEXT="Copying" ID="ID_769675978" CREATED="1670271577987" MODIFIED="1670271706850"/>
<node TEXT="Serialization" ID="ID_225844014" CREATED="1670271699664" MODIFIED="1670271702292"/>
<node TEXT="Load balancing and backpressure" ID="ID_302805052" CREATED="1670271746720" MODIFIED="1670271879740"/>
</node>
<node TEXT="Standardisation : Tooling&amp;Testability" ID="ID_790773842" CREATED="1670272163960" MODIFIED="1670272414507"/>
</node>
<node TEXT="Containers" POSITION="right" ID="ID_1324512184" CREATED="1670271517151" MODIFIED="1670272547620">
<node TEXT="Might tip the balance" ID="ID_20803951" CREATED="1670272553264" MODIFIED="1670272609817"/>
</node>
<node TEXT="What is dotnet?" POSITION="right" ID="ID_841665650" CREATED="1670271294143" MODIFIED="1670272719755">
<node TEXT="Runtime" ID="ID_1019050964" CREATED="1670272726320" MODIFIED="1670272985202">
<node TEXT="Memory management" ID="ID_1369302035" CREATED="1670272936745" MODIFIED="1670272944193"/>
<node TEXT="JIT from IL" ID="ID_277267655" CREATED="1670272944871" MODIFIED="1670272954059"/>
<node TEXT="Libraries for native and OS functions" ID="ID_435182309" CREATED="1670272950512" MODIFIED="1670273027142"/>
</node>
</node>
<node TEXT="Parts affecting interop" POSITION="right" ID="ID_58707009" CREATED="1670272923649" MODIFIED="1670273099507">
<node TEXT="Memory" ID="ID_219981591" CREATED="1670273101195" MODIFIED="1670273104283">
<node TEXT="Each tech has its allocator" ID="ID_1002689490" CREATED="1670273136057" MODIFIED="1670273146256"/>
<node TEXT="Dotnet can defragments some heaps" ID="ID_583203679" CREATED="1670273146657" MODIFIED="1670273162409"/>
</node>
<node TEXT="Libraries" ID="ID_1064735463" CREATED="1670273105008" MODIFIED="1670273107876">
<node TEXT="Allocations" ID="ID_131540324" CREATED="1670273268328" MODIFIED="1670273271524"/>
<node TEXT="Data structure ABI : e.g. String" ID="ID_835465347" CREATED="1670273205089" MODIFIED="1670273226803"/>
<node TEXT="Marshalling : Transformations for interop" ID="ID_1461019154" CREATED="1670273233129" MODIFIED="1670273259804"/>
<node TEXT="Calling concentions &amp; packing structs" ID="ID_763843997" CREATED="1670273441841" MODIFIED="1670273442811"/>
</node>
<node TEXT="Concurrency" ID="ID_77280197" CREATED="1670273108480" MODIFIED="1670273111329"/>
</node>
</node>
</map>
