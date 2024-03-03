#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EFortUISpecialEvents.h"
#include "FortUISpecialEventSubsystem.generated.h"

UCLASS(Blueprintable)
class UFortUISpecialEventSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialUIEventDelegate, TEnumAsByte<EFortUISpecialEvents>, InEventName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialUIEventDelegate OnNewUISpecialEventState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialUIEventDelegate OnTemporarySpecialUIEvent;
    
    UFortUISpecialEventSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetCurrentUISpecialEventState(TEnumAsByte<EFortUISpecialEvents> InNewEventState);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EFortUISpecialEvents> GetCurrentUIEventState();
    
    UFUNCTION(BlueprintCallable)
    void CallTemporarySpecialUIEvent(TEnumAsByte<EFortUISpecialEvents> InNewTemporaryEvent);
    
};

