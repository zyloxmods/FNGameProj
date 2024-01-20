#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "McpVariantChannelInfo.h"
#include "McpVariantReader.h"
#include "AthenaCosmeticAccountItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaCosmeticAccountItem : public UFortAccountItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> VariantChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantReader> Variants;
    
public:
    UAthenaCosmeticAccountItem();
    UFUNCTION(BlueprintCallable)
    bool HasMultipleVariants();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCosmeticVariance() const;
    
};

