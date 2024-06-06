#pragma once
#include "CoreMinimal.h"
#include "EItemProfileType.h"
#include "FortAccountItemDefinition.h"
#include "FortBannerTokenType.generated.h"

UCLASS(Blueprintable)
class UFortBannerTokenType : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemProfileType ProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BannerIconTemplateName;
    
public:
    UFortBannerTokenType(const FObjectInitializer& ObjectInitializer);
};

