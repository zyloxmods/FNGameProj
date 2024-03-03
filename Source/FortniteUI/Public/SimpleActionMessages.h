#pragma once
#include "CoreMinimal.h"
#include "ELinkAcrossSimpleAction.h"
#include "SimpleActionMessages.generated.h"

USTRUCT(BlueprintType)
struct FSimpleActionMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELinkAcrossSimpleAction SimpleActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SimpleActionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SimpleActionBody;
    
    FORTNITEUI_API FSimpleActionMessages();
};

