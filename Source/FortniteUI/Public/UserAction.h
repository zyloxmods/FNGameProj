#pragma once
#include "CoreMinimal.h"
#include "UserAction.generated.h"

USTRUCT(BlueprintType)
struct FUserAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    FORTNITEUI_API FUserAction();
};

