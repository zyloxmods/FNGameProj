#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAccountStatProxyInstance.generated.h"

UCLASS(Blueprintable)
class UFortAccountStatProxyInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CachedDisplayName;
    
    UFortAccountStatProxyInstance();
};

