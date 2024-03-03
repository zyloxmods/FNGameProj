#pragma once
#include "CoreMinimal.h"
#include "ContentMatch.h"
#include "ContentDef.generated.h"

USTRUCT(BlueprintType)
struct FContentDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContentMatch> Artifacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DependsOn;
    
    FORTNITEGAME_API FContentDef();
};

