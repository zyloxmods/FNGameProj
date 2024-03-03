#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataQuestionStandardBase.h"
#include "FortPlayerSurveyCMSDataQuestionFreeFormText.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataQuestionFreeFormText : public FFortPlayerSurveyCMSDataQuestionStandardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ht;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 L;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataQuestionFreeFormText();
};

