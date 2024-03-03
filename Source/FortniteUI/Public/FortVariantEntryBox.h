#pragma once
#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "Components/DynamicEntryBox.h"
#include "FortVariantEntryBox.generated.h"

class UAthenaCosmeticAccountItem;
class UAthenaCosmeticItemDefinition;

UCLASS(Blueprintable)
class UFortVariantEntryBox : public UDynamicEntryBox {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticAccountItem* CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CurrentItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> CurrentItemVariants;
    
public:
    UFortVariantEntryBox();
};

