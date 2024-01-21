#pragma once
#include "CoreMinimal.h"
#include "OfferGroup.generated.h"

USTRUCT(BlueprintType)
struct FOfferGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberToShow;
    
    FORTNITEUI_API FOfferGroup();
};

