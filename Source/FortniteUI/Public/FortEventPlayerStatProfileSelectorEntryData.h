#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortEventPlayerStatProfileSelectorEntryData.generated.h"

UCLASS(Blueprintable)
class UFortEventPlayerStatProfileSelectorEntryData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UFortEventPlayerStatProfileSelectorEntryData();
};

