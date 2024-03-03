#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetTextLibrary.h"
#include "EFortAnnouncementDisplayPreference.h"
#include "EFortBrushSize.h"
#include "EFortErrorSeverity.h"
#include "FortMultiSizeBrush.h"
#include "Styling/SlateBrush.h"
#include "CardPackOffer.h"
#include "EActivatePanelOption.h"
#include "EFortUIFeature.h"
#include "FortUIBlueprintFunctionLibrary.generated.h"

class AActor;
class AFortPlayerController;
class APlayerController;
class UCommonActivatablePanel;
class UFortGiftBoxItem;
class UFortItem;
class UFortItemDefinition;
class UFortUIStateWidget_NUI;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class UFortUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FSpokenDialogDelegate);
    DECLARE_DYNAMIC_DELEGATE_FourParams(FOpenTalkingHeadDelegate, UTexture2D*, Image, FText, Title, FText, Subtitle, EFortAnnouncementDisplayPreference, DisplayPreference);
    DECLARE_DYNAMIC_DELEGATE(FCloseTalkingHeadDelegate);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FBlockSubtitlePortraitDelegate, bool, bShouldBlockSubtitlePortrait);
    
    UFortUIBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UnregisterActiveCinematic(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void TryPushWidgetAsModalPanelForPlayer(AFortPlayerController* LocalPlayerController, UUserWidget* PushWidget);
    
    UFUNCTION(BlueprintCallable)
    static void TryPushWidgetAsModalPanel(UUserWidget* Context, UUserWidget* PushWidget);
    
    UFUNCTION(BlueprintCallable)
    static void TryPushWidgetAsActivatablePanelForPlayer(APlayerController* OwningPlayer, UUserWidget* PushWidget, EActivatePanelOption Header, EActivatePanelOption Footer, EActivatePanelOption ChatWidget);
    
    UFUNCTION(BlueprintCallable)
    static void TryPushWidgetAsActivatablePanel(UUserWidget* Context, UUserWidget* PushWidget, EActivatePanelOption Header, EActivatePanelOption Footer, EActivatePanelOption ChatWidget);
    
    UFUNCTION(BlueprintCallable)
    static void TryPopActivatablePanel(UUserWidget* Context, UCommonActivatablePanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    static void SortActorArray(const TArray<AActor*>& InActors, TArray<AActor*>& OutSortedActors);
    
    UFUNCTION(BlueprintCallable)
    static void ShowErrorDialog(UUserWidget* Context, FText DisplayMessage, const FString& ErrorCode, EFortErrorSeverity ErrorSeverity);
    
    UFUNCTION(BlueprintCallable)
    static void SetScrollWidget(UUserWidget* Context, UWidget* ToScroll);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RoundFloat(float Value, TEnumAsByte<ERoundingMode> RoundingMode);
    
    UFUNCTION(BlueprintCallable)
    static void ResetKeyboardMousePlayerBindingsToPreset(AFortPlayerController* LocalPlayerController, int32 PresetToSet);
    
    UFUNCTION(BlueprintCallable)
    static void RequestToOpenPlayerFeedbackModal(UUserWidget* Context);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterActiveCinematic(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static void PushContentWidgetForPlayer(AFortPlayerController* LocalPlayerController, UWidget* PushWidget);
    
    UFUNCTION(BlueprintCallable)
    static void PushContentWidgetAdvancedForPlayer(AFortPlayerController* LocalPlayerController, UWidget* PushWidget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable)
    static void PushContentWidgetAdvanced(UUserWidget* Context, UWidget* PushWidget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget);
    
    UFUNCTION(BlueprintCallable)
    static void PushContentWidget(UUserWidget* Context, UWidget* PushWidget);
    
    UFUNCTION(BlueprintCallable)
    static void PushActivatablePanel(UUserWidget* Context, UCommonActivatablePanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    static void PopCurrentModal(UUserWidget* Context);
    
    UFUNCTION(BlueprintCallable)
    static void PopContentWidgetForPlayer(AFortPlayerController* LocalPlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void PopContentWidget(UUserWidget* Context);
    
    UFUNCTION(BlueprintCallable)
    static void PopAllContentWidgets(UUserWidget* Context);
    
    UFUNCTION(BlueprintCallable)
    static void PopActivatablePanelInModalLayer(UUserWidget* Context, UCommonActivatablePanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    static void PopActivatablePanel(UUserWidget* Context, UCommonActivatablePanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    static void NavigateToFeature(UUserWidget* Context, EFortUIFeature Feature);
    
    UFUNCTION(BlueprintCallable)
    static void NavigateForGift(UUserWidget* Context, UFortGiftBoxItem* Item);
    
    UFUNCTION(BlueprintCallable)
    static void KillConfirmation(UUserWidget* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUIAddedToViewport(AFortPlayerController* LocalPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTimespanAsSimpleString(FTimespan Timespan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetStandardBrushSize(TEnumAsByte<EFortBrushSize::Type> BrushSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetOrLoadSynchronously(const TSoftObjectPtr<UTexture2D>& SoftTexture2D);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMetaStringOnOffer(const FCardPackOffer& Offer, const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMetaIntOnOffer(const FCardPackOffer& Offer, const FString& Key, int32 DefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMetaBoolOnOffer(const FCardPackOffer& Offer, const FString& Key, bool bDefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortMultiSizeBrush GetItemSmallPreviewImageMultiSizeBrush(const UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush GetItemSmallPreviewImageBrush(const UFortItem* Item, TEnumAsByte<EFortBrushSize::Type> BrushSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortMultiSizeBrush GetItemDefinitionSmallPreviewImageMultiSizeBrush(const UFortItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush GetItemDefinitionSmallPreviewImageBrush(const UFortItemDefinition* ItemDefinition, TEnumAsByte<EFortBrushSize::Type> BrushSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortUIStateWidget_NUI* GetCurrentUIStateWidget(UUserWidget* Context);
    
    UFUNCTION(BlueprintCallable)
    static UCommonActivatablePanel* GetCurrentModal(UUserWidget* Context);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetCachedWidgetForPlayer(AFortPlayerController* LocalPlayerController, UClass* WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static UUserWidget* GetCachedWidget(UUserWidget* Context, UClass* WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetAssetFromTemplateId(const FString& TemplateId);
    
    UFUNCTION(BlueprintCallable)
    static void DrawWidgetToRenderTarget(UUserWidget* Widget, UTextureRenderTarget2D* RenderTarget);
    
    UFUNCTION(BlueprintCallable)
    static void CenterWidget(UUserWidget* Context, UWidget* ToCenter);
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnShouldOpenTalkingHead(UUserWidget* Context, const UFortUIBlueprintFunctionLibrary::FOpenTalkingHeadDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnShouldCloseTalkingHead(UUserWidget* Context, const UFortUIBlueprintFunctionLibrary::FCloseTalkingHeadDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnShouldBlockSubtitlePortraitChanged(UUserWidget* Context, const UFortUIBlueprintFunctionLibrary::FBlockSubtitlePortraitDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BindToOnEndSpokenDialog(UUserWidget* Context, const UFortUIBlueprintFunctionLibrary::FSpokenDialogDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreModalsConfirmationsErrorsActive(AFortPlayerController* LocalPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreModalsActive(AFortPlayerController* LocalPlayerController);
    
};

