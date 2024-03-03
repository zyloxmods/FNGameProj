#pragma once
#include "CoreMinimal.h"
#include "ContentBinaries.generated.h"

USTRUCT(BlueprintType)
struct FContentBinaries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Files;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TotalSizeKb;
    
    FORTNITEGAME_API FContentBinaries();
};

