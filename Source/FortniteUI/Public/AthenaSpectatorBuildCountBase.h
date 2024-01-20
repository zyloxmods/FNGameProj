#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESpectatorBuildCountType.h"
#include "Templates/SubclassOf.h"
#include "AthenaSpectatorBuildCountBase.generated.h"

class ABuildingSMActor;
class AFortPlayerControllerSpectating;
class AFortPlayerState;
class UFortWorldItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorBuildCountBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> BuildingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpectatorBuildCountType BuildCountType;
    
public:
    UAthenaSpectatorBuildCountBase();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateBuildCount();
    
    UFUNCTION(BlueprintCallable)
    void OnWorldItemListChanged(const TArray<UFortWorldItem*>& ItemsAdded, const TArray<UFortWorldItem*>& ItemsRemoved);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowedPlayerChanged_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* NewFollowedPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuildCountChanged(int32 OldCount, int32 NewCount);
    
};

