#pragma once
#include "CoreMinimal.h"
#include "ContentDef.h"
#include "ContentPackage.generated.h"

USTRUCT(BlueprintType)
struct FContentPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContentDef> Content;
    
    FORTNITEGAME_API FContentPackage();
};

