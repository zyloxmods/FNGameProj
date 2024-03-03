#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EBotNamingMode.h"
#include "FortBotNameSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortBotNameSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBotNamingMode::Type> NamingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OverrideName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddPlayerIDSuffix;
    
    UFortBotNameSettings();
};

