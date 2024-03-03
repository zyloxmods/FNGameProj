#pragma once
#include "CoreMinimal.h"
#include "KairosAvatarAttributesMcpData.h"
#include "KairosAvatarItemMcpData.generated.h"

USTRUCT(BlueprintType)
struct KAIROSSCENECAPTURE_API FKairosAvatarItemMcpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKairosAvatarAttributesMcpData Attributes;
    
    FKairosAvatarItemMcpData();
};

