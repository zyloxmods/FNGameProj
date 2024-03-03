#pragma once
#include "CoreMinimal.h"
#include "ContentConsumerFilter.h"
#include "EConsumerRole.h"
#include "ContentMatch.generated.h"

USTRUCT(BlueprintType)
struct FContentMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArtifactId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumerRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContentConsumerFilter Filter;
    
    FORTNITEGAME_API FContentMatch();
};

