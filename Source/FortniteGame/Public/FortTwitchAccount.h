#pragma once
#include "CoreMinimal.h"
#include "FortLinkedAccount.h"
#include "FortTwitchAccount.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTwitchAccount : public UFortLinkedAccount {
    GENERATED_BODY()
public:
    UFortTwitchAccount();
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdated();
    
};

