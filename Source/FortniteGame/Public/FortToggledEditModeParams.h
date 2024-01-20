#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortToggledEditModeParams.generated.h"

class ABuildingSMActor;
class AFortPlayerController;
class UFortToggledEditModeParams;

UCLASS(Blueprintable)
class UFortToggledEditModeParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerThatToggledEditMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* EditableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInEditMode;
    
    UFortToggledEditModeParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerController* _PlayerThatToggledEditMode, ABuildingSMActor* InEditableActor, bool InEditMode, UFortToggledEditModeParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _PlayerThatToggledEditMode, ABuildingSMActor*& NewEditableActor, bool& InEditMode);
    
};

