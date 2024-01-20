#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortLinkedAccountManager.generated.h"

class UFortLinkedAccount;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortLinkedAccountManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortLinkedAccount*> LinkedAccounts;
    
public:
    UFortLinkedAccountManager();
};

