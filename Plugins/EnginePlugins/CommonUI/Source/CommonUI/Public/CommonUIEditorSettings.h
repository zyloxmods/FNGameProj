#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonUIEditorSettings.generated.h"

class UCommonBorderStyle;
class UCommonButtonStyle;
class UCommonTextStyle;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Editor)
class COMMONUI_API UCommonUIEditorSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonTextStyle> TemplateTextStyle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonButtonStyle> TemplateButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonBorderStyle> TemplateBorderStyle;
    
public:
    UCommonUIEditorSettings();
};

