#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnActiveEventFlagsChangedDelegate.h"
#include "FortSeasonalEventManager.generated.h"

UCLASS(Blueprintable, Within=FortGameInstance)
class FORTNITEGAME_API UFortSeasonalEventManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveEventFlagsChanged OnActiveEventFlagsChanged;
    
    UFortSeasonalEventManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventFlagActive(const FString& QueriedEventFlagName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBRXPBonusPoints() const;
    
};

