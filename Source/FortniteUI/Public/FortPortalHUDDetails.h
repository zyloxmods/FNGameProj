#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortActorIndicatorWidget.h"
#include "FortPortalHUDDetails.generated.h"

class UAthenaMarkerPointer;
class UCommonActivatableWidgetSwitcher;
class UFortInteractContextInfo;

UCLASS(Blueprintable, EditInlineNew)
class UFortPortalHUDDetails : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMarkerPointer* MarkerPointer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* MobileInfo_Matchmaking_Switcher;
    
public:
    UFortPortalHUDDetails();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCachedWorldPos(FVector InWorldPos);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveMatchmakingTextIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveContextInfo(UFortInteractContextInfo* ActiveContextInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingComplete(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortInteractContextInfo* GetActiveContextInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearCachedWorldPos();
    
};

