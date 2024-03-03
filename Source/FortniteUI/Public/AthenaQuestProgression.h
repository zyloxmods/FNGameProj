#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaQuestProgression.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaQuestProgression : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_ChallengeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_Challenge_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_Challenge_Back;
    
public:
    UAthenaQuestProgression();
};

