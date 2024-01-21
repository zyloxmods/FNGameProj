#pragma once
#include "CoreMinimal.h"
#include "McpVariantReader.generated.h"

USTRUCT(BlueprintType)
struct FMcpVariantReader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Owned;
    
    FORTNITEGAME_API FMcpVariantReader();
};

