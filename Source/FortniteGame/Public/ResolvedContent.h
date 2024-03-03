#pragma once
#include "CoreMinimal.h"
#include "ContentBinaries.h"
#include "ResolvedContent.generated.h"

USTRUCT(BlueprintType)
struct FResolvedContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DependsOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContentBinaries Binaries;
    
    FORTNITEGAME_API FResolvedContent();
};

