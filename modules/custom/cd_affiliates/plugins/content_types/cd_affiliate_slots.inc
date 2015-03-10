<?php

/**
 * Initialize our ctools content type plugin
 * @var array
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Commerce Deploy Affiliates'),
  'description' => t('Rotating banners for affiliates'),
  'category' => t('Commerce Deploy'),
  'admin info' => 'cd_affiliates_slots_admin_info',
  'render callback' => 'cd_affiliates_slots_admin_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
);

/**
 * Callback for the admin info when viewing page management interface.
 */
function cd_affiliates_slots_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Affiliate banners');
  $block->content = t('Affiliates');
  return $block;
}

/**
 * Callback that returns a renderable block for display.
 */
function cd_affiliates_slots_admin_render($subtype, $conf, $panel_args, $context = NULL) {
  $affiliates = cd_affiliates_slots_affiliate_roll();

  // Initiate the block to be returned with our render arrays.
  $block = new stdClass();
  $block->title = '';
  $block->content['#markup'] = '<div class="affiliate-item">' .$affiliates[array_rand($affiliates)] . '</div>';

  return $block;
}

function cd_affiliates_slots_affiliate_roll() {
  $codes = array();

  // OS Training
  $code[] = '<a target="_blank" href="http://www.shareasale.com/r.cfm?b=458057&u=940441&m=38747&urllink=&afftrack="><img src="http://www.shareasale.com/image/38747/ost-drupal-banner-300x250.jpeg" alt="Drupal Training from OSTraining" border="0"></a>';
  // MaxCDN
  $code[] = '<a href="http://tracking.maxcdn.com/c/87306/3964/378"><img src="http://adn.impactradius.com/display-ad/378-3964" border="0" alt="MaxCDN Content Delivery Network" width="300" height="250"/></a><img height="1" width="1" src="http://tracking.maxcdn.com/i/87306/3964/378" border="0" />';
  $code[] = '<style>.square-responsive { width: 100%; height: 250px; }</style>
<script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script><!-- Square Responsive -->
<ins class="adsbygoogle square-responsive" style="display:inline-block" data-ad-client="ca-pub-1551015534754654" data-ad-slot="1230663150"></ins><script>(adsbygoogle = window.adsbygoogle || []).push({});</script>';
  return $code;
}
