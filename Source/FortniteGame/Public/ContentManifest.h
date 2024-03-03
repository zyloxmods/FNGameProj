#pragma once
#include "CoreMinimal.h"
#include "ResolvedContent.h"
#include "ContentManifest.generated.h"

USTRUCT(BlueprintType)
struct FContentManifest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResolvedContent> Content;
    
    FORTNITEGAME_API FContentManifest();
};

