#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortLinkedAccount.generated.h"

class UFortLinkedAccountManager;

UCLASS(Abstract, Blueprintable)
class UFortLinkedAccount : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLinkedAccountManager* Manager;
    
public:
    UFortLinkedAccount();
};

