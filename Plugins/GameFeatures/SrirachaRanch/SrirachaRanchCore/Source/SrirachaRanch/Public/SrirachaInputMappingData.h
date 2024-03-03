#pragma once
#include "CoreMinimal.h"
#include "SrirachaInputMappingData.generated.h"

USTRUCT(BlueprintType)
struct FSrirachaInputMappingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GamepadActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    SRIRACHARANCH_API FSrirachaInputMappingData();
};

