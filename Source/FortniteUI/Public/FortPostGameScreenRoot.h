#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "FortPostGameScreenRoot.generated.h"

class UFortPlaylistUIInfo;
class UFortPostGameScreen;
class UFortPostGameScreenContainer;
class UOverlay;
class UScaleBox;
class USpacer;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPostGameScreenRoot : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaylistUIInfo* PreviewPlaylistUIInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaylistUIInfo* DefaultScreenOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> PostGameScreenClassesToCreate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortPostGameScreen*> PostGameScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_ClickCatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_Placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPostGameScreenContainer* PostGameScreenContainer_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* HUD_CinematicBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_CinematicBars_UserSpecified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox_PlacementOverlay_UserSpecified;
    
public:
    UFortPostGameScreenRoot();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleBlur();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AnimateCinematicBars();
    
};

