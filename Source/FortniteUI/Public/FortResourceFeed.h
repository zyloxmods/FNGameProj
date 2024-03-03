#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortResourceFeed.generated.h"

class AActor;
class ABuildingSMActor;
class AFortVolume;
class UFortItem;
class UFortItemDefinition;
class UFortSimpleWidgetAnimationsPanel;
class UFortWorldItem;
class UImage;
class UTextBlock;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortResourceFeed : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResourceGainedTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* CurrentItemDefinition;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_ResourceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_ResourceGained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Widget_Glow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSimpleWidgetAnimationsPanel* Panel_Animations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ResourceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ResourceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ResourceGained;
    
public:
    UFortResourceFeed();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeakpointHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceGained();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void HandleWeakpointHitFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    bool HandleTimedOut(float InDeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleResourceGainedFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerVolumeChanged(AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemPickedUp(UFortWorldItem* WorldItem, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFadeOutFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDamagedResourceBuilding(ABuildingSMActor* InBuildingSMActor, UFortItem* InItem, bool bDestroyed, bool bJustHitWeakspot);
    
    UFUNCTION(BlueprintCallable)
    void HandleDamagedResourceActor(AActor* InActor, UFortItem* InItem, bool bDestroyed, bool bJustHitWeakspot);
    
};

