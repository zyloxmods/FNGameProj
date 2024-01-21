#pragma once
#include "CoreMinimal.h"
#include "BuildingSMActor.h"
#include "KeepHeartBase.generated.h"

class AFortPlayerController;
class AFortSaveFileBuildingInstructionsHandler;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AKeepHeartBase : public ABuildingSMActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortSaveFileBuildingInstructionsHandler> BuildingInstructionsHandlerClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortSaveFileBuildingInstructionsHandler* SaveFileInstructionsHandler;
    
public:
    AKeepHeartBase();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAllowLooting(bool bAllowed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SaveUserKeep(AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ResetUserKeep(AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LoadUserKeep(AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintCallable)
    bool IsKeepOwner(const AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool IsKeepLoaded();
    
};

