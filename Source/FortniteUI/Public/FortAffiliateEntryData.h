#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAffiliateEntryData.generated.h"

UCLASS(Blueprintable)
class UFortAffiliateEntryData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AffiliateName;
    
    UFortAffiliateEntryData();
};

