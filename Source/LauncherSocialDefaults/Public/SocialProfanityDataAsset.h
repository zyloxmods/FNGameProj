#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ProfanityData.h"
#include "SocialProfanityDataAsset.generated.h"

UCLASS(Blueprintable)
class USocialProfanityDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProfanityData> ProfanityData;
    
    USocialProfanityDataAsset();
};

