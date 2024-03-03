#pragma once
#include "CoreMinimal.h"
#include "ActionTextPair.generated.h"

USTRUCT(BlueprintType)
struct FActionTextPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FORTNITEGAME_API FActionTextPair();
};

