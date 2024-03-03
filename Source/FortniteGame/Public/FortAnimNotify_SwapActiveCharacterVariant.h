#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "McpVariantChannelInfo.h"
#include "FortAnimNotify_SwapActiveCharacterVariant.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_SwapActiveCharacterVariant : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpVariantChannelInfo VariantToSwapTo;
    
    UFortAnimNotify_SwapActiveCharacterVariant();
};

